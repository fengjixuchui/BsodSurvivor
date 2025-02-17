# BSOD Survivor

Drivers development is a time consuming process.
Have you ever been frustrated with the time-consuming process of rebooting your VM or reattaching Windbg again just to fix a BSOD caused by a function call of your driver? Or have you wanted to add a conditional breakpoint without unloading the driver? or just change a line? Look no further! Our project offers a solution to these problems and more.

Our project allows you to update source code and global variables in debugging without unloading the driver or rebooting your VM. You can easily compile the file with the changes you want, link it with the already loaded code in memory, and replace the old functions with the new ones - all at runtime! And with our Bsod Survivor Visual Studio Plugin, you can instruct Windbg which code to change in real time.

Not only that, but our project also allows you to change the program state to be in the state before the current function was called, and jump to a previous line in the function - all while calling the necessary destructors of the function, so you can rerun the code safely!!. And if you need to run expression evaluation from a file, including templates and default parameters, our project has got you covered also.


To see our project in action, take a look at our example. We show you how to fix an infinite loop caused by a function call in just a few simple steps. With our project, debugging has never been easier!

**This project is for you!!**

Our project is a fork of LLVM 10 and is currently in beta version 0.3.0. It consists of a Visual Studio plugin, Windbg plugin, and changes to LLDB/Clang/LLD.



# Example

First we load a driver

![](readme-pics/loaded.png)

as you can see I accidently called a function(realEntry) which doesn't do anything, its run is infinite in fact, and I can't even unload this driver.

so lets fix this:

first I go to Visual Studio to change and activate the dynamic linking in runtime with our driver , by clicking Tools->Linking With Loaded Driver, which will compile the selected file (Main.cpp) and link it dynamically.

This is the result

![](readme-pics/acivate_link_in_runtime.PNG)

as you can see I added DriverUnload to the code, and this is not an infinite loop anymore.

Then I return to Windbg and run **!return_with** (return_with is returning from the current function and calling needed destructors, without continue the function- so it should be safe to be used) in the Windbg command window , in order to return to the previous function and rerun the function which we were inside

![](readme-pics/after_return.PNG)

we are now after the call to realEntry, but we wants to run realEntry  again, so I am jumping to line 14 - using **!jump 14**

![](readme-pics/after_jump.PNG)

and now I can just step into the function(F11) and continue debugging my new code as a regular code.

![](readme-pics/after_step_into.PNG)

but then I remembered that what I really wants is that uniName in line 17 to be \\\DosDevices\\C:\\WINDOWS\\example2.txt instead of \\\DosDevices\\C:\\WINDOWS\\example.txt, although I can just update line 17, and do the same procedure as I did previously of changing the function, I can also just do this in another way, by evaluating and running an expression which will affect the local variable uniName, only in this run, and not in all the runs, usefull for experiments / code you don't want to  run in multiple threads and so on.

!expr c:\temp\a.txt , where I saved in c:\temp\a.txt
the following content:
RtlInitUnicodeString(&uniName, L" \\\\\DosDevices\\\C:\\\WINDOWS\\\example2.txt");

![](readme-pics/after_expr.PNG)

UniName as you can see have the value of L" \\\\\DosDevices\\\C:\\\WINDOWS\\\example2.txt".

and finally let's see how we can continue the program - even if we got BSOD:

First let's get a driver which do a BSOD:

![](readme-pics/bsod.png)

as you can see we accessed variable a where variable a has a value of nullptr, and that caused a BSOD.

lets "survive" this, by using !return_to_frame_with, which returns from frame 0 to the selected frame.

![](readme-pics/after_return_from_bsod.PNG)

and now  we can continue the program as usual by changing the value of a (by windbg command),  or we can just do what we did previously and change this function code, and rerun it with the changed code.

Please be noted that I added in advance a breakpoint in nt!KeBugCheck* in order for break the program before it will changed to DISPATCH_LEVEL because of the BSOD, my recommendation is for you to always configure Windbg to break in those functions by "bm nt!KeBugCheck* " command, please See it in the [Configure Windbg](#configure-windbg)

# Installation

you need to download the msi executable from https://github.com/ykfre/BsodSurvivor

and follow the installation guide in [here](installer/README.md).

# Windbg Commands

- **!expr {expression}** - This command allows you to evaluate an expression which resides in a file path. You can still use breakpoints as you normally would, so you can break in functions called inside the expression.
- !**reload_config** - This command reloads the config.json file, allowing you to update your configurations on the fly.
- !**return_with** - This command returns from the current frame while calling destructors.
- !**return_without** - This command returns from the current frame without calling destructors.
- !**return_to_frame_with** -  This command returns from the current frame to the selected frame (which you should select by pressing on it in Windbg) while calling destructors.
- !**return_to_frame_without** - This command returns from the current frame to the selected frame (which you should select by pressing on it in Windbg) without calling destructors.
- **!jump {line_num}** - This command jumps to a previous line in the same function, including calling any needed destructors..
- **!reload_dynamic_modules** - This command makes Windbg reload dynamic modules again, which is useful if you have used the .reload /f command and Windbg removed the dynamic modules.
- **!reset_saved_files** - This command makes Windbg stop showing some version of a cpp file, and makes it use the most updated one in the disk. This should only be used if a bug has somehow appeared.
- **!discard_expr** - This command discards the current active expression if it exists. This operation does not call any needed destructors.
- **!jump_to_most_updated** - This command changes the current program counter to an equivalent function to the current function, which is the most updated function, if it is safe to do so.

# Build Your Driver

- [ ] In order for the expression evaluator to work correctly even on templates/default arguments you need to add module.modulemap with sdafx.h as there is in the [ClangDriverExample dir](bsodSurvivor\clangDriverExample\msis\module.modulemap),(you can just take this file), and place it in the dir of the wanted include, see the structure of [ClangDriverExample](bsodSurvivor\clangDriverExample) for better understanding.

  - stdafx.h should contain all the headers which we want their in information in debugging time Usually wdm and your STL types

  - In module.modulemap should be listed only one file.

  - There should be only one module.modulemap file in your entire project.

  - stdafx.h should be the first include in your files, and you shouldn't include any contained include after stdafx.h, for example let's say MyVector.h is inside stdafx.h - you shouldn't do:

     #include stdafx.h
    #include MyVector.h
- [ ] In order for getting all the above functionality you need to use ${BSOD_SURVIVOR_DIR}\visual studio\BsodSurvivorDriverCommon.props for libs, and ${BSOD_SURVIVOR_DIR}\visual studio\BsodSurvivorDriver.props for drivers when you are compiling your driver. 
You must builld all your libs, which you want to change at run time and driver code using this compiler.

  BSOD_SURVIVOR_DIR - will be added to your environment variable after the [Installation](#installation)


# Configure Windbg

### In order for the plugin to work correctly you need to do the following:

- [ ] In {windbg_folder}/amd64/winext/config.json please edit it as the comments there instructing.

- [ ] In Windbg please make sure you are using the following command in order to use correctly the Windbg plugin:

  .load BsodSurvivor;.reload;ed nt!Kd_Default_Mask 8;bm nt!KeBugCheck*"

- [ ] In your first ever plugin run - please let the plugin an access through Windows Defender firewall.

# Supported Architectures

Currently it is supported on Windows 7 and Windows 10 without [hvci](https://docs.microsoft.com/en-us/windows-hardware/drivers/bringup/device-guard-and-credential-guard).

For the Windbg plugin - [Windbg Preview](https://www.microsoft.com/en-us/p/windbg-preview/9pgjgd53tn86) is required, and will not work correctly on the old one.

For the visual studio plugin - only Visual Studio 2019 is supported.

# Limitations And Known Issues

- The project currently only supports debugging one driver at a time, and you will need to specify which driver to use in the configuration file (config.json).
- You won't be able to debug multiple vms nor using multiple instances of the Windbg plugin. 
- The vm must be stopped before you run any feature, and you must be sure the operation of the feature ended before you continue your run  (There will be an informative log).
- Some Antiviruses may for some reason block some operations of your local Windbg -please add Windbg and the plugin to the white list of those antiviruses if some blocking window appears. 

## Updating Driver Code In Runtime Limitations

- Changes of functions are taking affect only on the next rerun of a function - meaning if you are already in a function when you debugged, before you linked, you must return from this function/call it again in order for the changes to take affect.

  for that reason I added a stub function like realEntry in ClangDriverExample, which gives me an ability to return from realEntry, and run it again like in the example [above](#example). Stubs are useful for every function which is a callback to external pes.

- Can't link with code which isn't reside in memory/ is in the source file which you change, meaning mostly that if you are using libs, your program should be linked with /wholearchive with them, please be note that this isn't necessary to libs of exported dlls like ntos, fltmgr and so on, because their functions are exported by drivers which are loaded in the memory.

- Changes in a const static variable/static function (not static methods)/function in anonymous namespace/lambdas are taking affect only on the next run of this function from a changed regular function(not the mentioned functions), for example, let's say this is the code which is running:

  ```c++
  static void staticFunc()
  {
      // do_something
  }
  
  void r()
  {
      for(size_t i=0; i<10; i++)
      {
      	staticFunc();
      }
  }
  ```

  if we are in staticFunc we need not only to return from staticFunc, but we need also to return from r and rerun it, in order to changes to take affect, as staticFunc is static.

- Functions/Globlals from old objs have different addresses from Functions/ Globals in the new the new obj.

- Globals with ctor's/dtor's aren't supported and will not work as expected.

- Pre build scripts which changes/adds c++ code aren't supported.

- Inline static const int varialbes changes are taking affect only on an obj file change base, and all the cpp files which are using this variables should be recompiled.

- Modifiable global variable won't be updated the value in the new obj if this variable was already exists in in the driver. For example let's say int g=0; was in the driver, and now we write int g=1;

   g will actually have a value of 0, and not 1. This is an intended behavior in order to reserve global variables values which may change in a runtime.

-  Old/new break points on an old source code, won't affect anymore the program, so you will need to place them on the newest source file, which is created in a temp directory, This file is opened when you step into one of the new functions, or  you can open it manually by searching the last modified file using [Everything](https://www.voidtools.com/) and the file name which you changed. For example let's say you changed a file whose name is main.cpp, than search in Everything main.cpp, and you will find the file is "____2_____6264218882520860571____Main.cpp". You can of course just place __debugbreak() in the code instead of  opening the file. 

- Code which uses try catch/sehs shouldn't be in a code which is being updated - as Windows will not run the catch/__except code.

  You should place them in different files from the file which you want to change.
  
## Evaluating Expressions - Limitations

- For now there isn't a support for printing automatically a result of expression, you need to use instead [DbgPrint](https://docs.microsoft.com/en-us/windows-hardware/drivers/ddi/wdm/nf-wdm-dbgprint) in the expression, for example: DbgPrint("result is %d", f()).

- Default function arguments /Macros won't be found if if the function isn't in a file which is in in a [clang module](https://clang.llvm.org/docs/Modules.html)

  - **All the modules support is very much experimental**!

- Functions which didn't compiled to the binary - won't be able to be found and used, mainly important for templates/ static unused functions if their implementation isn't in a [module](https://clang.llvm.org/docs/Modules.html) .

- Functions in an anonymous namespaces won't be found.

- Expressions with classes/functions with const expressions SNIFAE, or forward declaration won't be evaluated correctly even with module, please use static const where possible.
  type_traits, std::unique_ptr,std::shared_ptr, std::optional, and std::expected were changed in order to be implemented without static constexpr where possible in [here](bsodSurvivor\tests\ExecutableTest\stl).

  This files are also installed as part of BSOD_SURVIVOR installation (will be used only if you include them).

- Templates and Default function arguments won't work if you will compile the program using Incredibuild, as it won't find there module.modulemap in the remote computer ( the compilation will still succeed)

- You won't be able to evaluate expression if there is an upper frame from your selected frame, which its program counter isn't in your main driver as configured in config.json

- Consts values are evaluated using the original module content only.

# Open Source Acknowledgements

Blink - https://github.com/crosire/blink for pdb parser and some ideas.

tenzen-llvm-project https://github.com/tentzen/llvm-project, for the implementation of sehs in llvm x64, which return of frame is based on.

cppcheck-plugin https://github.com/VioletGiraffe/cppcheck-vs-addin The code of the Visual Studio Extension is based on this code.

Microsoft stl -  https://github.com/microsoft/STL

std::expected - https://github.com/TartanLlama/expected



