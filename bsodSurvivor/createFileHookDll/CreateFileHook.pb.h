// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CreateFileHook.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CreateFileHook_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CreateFileHook_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3013000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3013000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CreateFileHook_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CreateFileHook_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[5]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CreateFileHook_2eproto;
namespace CreateFileHook {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class SendPathDataReply;
class SendPathDataReplyDefaultTypeInternal;
extern SendPathDataReplyDefaultTypeInternal _SendPathDataReply_default_instance_;
class SendPathDataRequest;
class SendPathDataRequestDefaultTypeInternal;
extern SendPathDataRequestDefaultTypeInternal _SendPathDataRequest_default_instance_;
class ShouldSendPathDataReply;
class ShouldSendPathDataReplyDefaultTypeInternal;
extern ShouldSendPathDataReplyDefaultTypeInternal _ShouldSendPathDataReply_default_instance_;
class ShouldSendPathDataRequest;
class ShouldSendPathDataRequestDefaultTypeInternal;
extern ShouldSendPathDataRequestDefaultTypeInternal _ShouldSendPathDataRequest_default_instance_;
}  // namespace CreateFileHook
PROTOBUF_NAMESPACE_OPEN
template<> ::CreateFileHook::Empty* Arena::CreateMaybeMessage<::CreateFileHook::Empty>(Arena*);
template<> ::CreateFileHook::SendPathDataReply* Arena::CreateMaybeMessage<::CreateFileHook::SendPathDataReply>(Arena*);
template<> ::CreateFileHook::SendPathDataRequest* Arena::CreateMaybeMessage<::CreateFileHook::SendPathDataRequest>(Arena*);
template<> ::CreateFileHook::ShouldSendPathDataReply* Arena::CreateMaybeMessage<::CreateFileHook::ShouldSendPathDataReply>(Arena*);
template<> ::CreateFileHook::ShouldSendPathDataRequest* Arena::CreateMaybeMessage<::CreateFileHook::ShouldSendPathDataRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace CreateFileHook {

// ===================================================================

class Empty PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CreateFileHook.Empty) */ {
 public:
  inline Empty() : Empty(nullptr) {}
  virtual ~Empty();

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Empty* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(nullptr);
  }

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CreateFileHook.Empty";
  }
  protected:
  explicit Empty(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CreateFileHook_2eproto);
    return ::descriptor_table_CreateFileHook_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CreateFileHook.Empty)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CreateFileHook_2eproto;
};
// -------------------------------------------------------------------

class ShouldSendPathDataRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CreateFileHook.ShouldSendPathDataRequest) */ {
 public:
  inline ShouldSendPathDataRequest() : ShouldSendPathDataRequest(nullptr) {}
  virtual ~ShouldSendPathDataRequest();

  ShouldSendPathDataRequest(const ShouldSendPathDataRequest& from);
  ShouldSendPathDataRequest(ShouldSendPathDataRequest&& from) noexcept
    : ShouldSendPathDataRequest() {
    *this = ::std::move(from);
  }

  inline ShouldSendPathDataRequest& operator=(const ShouldSendPathDataRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ShouldSendPathDataRequest& operator=(ShouldSendPathDataRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ShouldSendPathDataRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShouldSendPathDataRequest* internal_default_instance() {
    return reinterpret_cast<const ShouldSendPathDataRequest*>(
               &_ShouldSendPathDataRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ShouldSendPathDataRequest& a, ShouldSendPathDataRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ShouldSendPathDataRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ShouldSendPathDataRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ShouldSendPathDataRequest* New() const final {
    return CreateMaybeMessage<ShouldSendPathDataRequest>(nullptr);
  }

  ShouldSendPathDataRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ShouldSendPathDataRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ShouldSendPathDataRequest& from);
  void MergeFrom(const ShouldSendPathDataRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ShouldSendPathDataRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CreateFileHook.ShouldSendPathDataRequest";
  }
  protected:
  explicit ShouldSendPathDataRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CreateFileHook_2eproto);
    return ::descriptor_table_CreateFileHook_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPathFieldNumber = 1,
  };
  // string path = 1;
  void clear_path();
  const std::string& path() const;
  void set_path(const std::string& value);
  void set_path(std::string&& value);
  void set_path(const char* value);
  void set_path(const char* value, size_t size);
  std::string* mutable_path();
  std::string* release_path();
  void set_allocated_path(std::string* path);
  private:
  const std::string& _internal_path() const;
  void _internal_set_path(const std::string& value);
  std::string* _internal_mutable_path();
  public:

  // @@protoc_insertion_point(class_scope:CreateFileHook.ShouldSendPathDataRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr path_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CreateFileHook_2eproto;
};
// -------------------------------------------------------------------

class ShouldSendPathDataReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CreateFileHook.ShouldSendPathDataReply) */ {
 public:
  inline ShouldSendPathDataReply() : ShouldSendPathDataReply(nullptr) {}
  virtual ~ShouldSendPathDataReply();

  ShouldSendPathDataReply(const ShouldSendPathDataReply& from);
  ShouldSendPathDataReply(ShouldSendPathDataReply&& from) noexcept
    : ShouldSendPathDataReply() {
    *this = ::std::move(from);
  }

  inline ShouldSendPathDataReply& operator=(const ShouldSendPathDataReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline ShouldSendPathDataReply& operator=(ShouldSendPathDataReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ShouldSendPathDataReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ShouldSendPathDataReply* internal_default_instance() {
    return reinterpret_cast<const ShouldSendPathDataReply*>(
               &_ShouldSendPathDataReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ShouldSendPathDataReply& a, ShouldSendPathDataReply& b) {
    a.Swap(&b);
  }
  inline void Swap(ShouldSendPathDataReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ShouldSendPathDataReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ShouldSendPathDataReply* New() const final {
    return CreateMaybeMessage<ShouldSendPathDataReply>(nullptr);
  }

  ShouldSendPathDataReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ShouldSendPathDataReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ShouldSendPathDataReply& from);
  void MergeFrom(const ShouldSendPathDataReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ShouldSendPathDataReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CreateFileHook.ShouldSendPathDataReply";
  }
  protected:
  explicit ShouldSendPathDataReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CreateFileHook_2eproto);
    return ::descriptor_table_CreateFileHook_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kShouldFieldNumber = 1,
  };
  // bool should = 1;
  void clear_should();
  bool should() const;
  void set_should(bool value);
  private:
  bool _internal_should() const;
  void _internal_set_should(bool value);
  public:

  // @@protoc_insertion_point(class_scope:CreateFileHook.ShouldSendPathDataReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  bool should_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CreateFileHook_2eproto;
};
// -------------------------------------------------------------------

class SendPathDataRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CreateFileHook.SendPathDataRequest) */ {
 public:
  inline SendPathDataRequest() : SendPathDataRequest(nullptr) {}
  virtual ~SendPathDataRequest();

  SendPathDataRequest(const SendPathDataRequest& from);
  SendPathDataRequest(SendPathDataRequest&& from) noexcept
    : SendPathDataRequest() {
    *this = ::std::move(from);
  }

  inline SendPathDataRequest& operator=(const SendPathDataRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SendPathDataRequest& operator=(SendPathDataRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SendPathDataRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SendPathDataRequest* internal_default_instance() {
    return reinterpret_cast<const SendPathDataRequest*>(
               &_SendPathDataRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(SendPathDataRequest& a, SendPathDataRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SendPathDataRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SendPathDataRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SendPathDataRequest* New() const final {
    return CreateMaybeMessage<SendPathDataRequest>(nullptr);
  }

  SendPathDataRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SendPathDataRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SendPathDataRequest& from);
  void MergeFrom(const SendPathDataRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SendPathDataRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CreateFileHook.SendPathDataRequest";
  }
  protected:
  explicit SendPathDataRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CreateFileHook_2eproto);
    return ::descriptor_table_CreateFileHook_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOldPathFieldNumber = 1,
    kNewPathFieldNumber = 2,
  };
  // string oldPath = 1;
  void clear_oldpath();
  const std::string& oldpath() const;
  void set_oldpath(const std::string& value);
  void set_oldpath(std::string&& value);
  void set_oldpath(const char* value);
  void set_oldpath(const char* value, size_t size);
  std::string* mutable_oldpath();
  std::string* release_oldpath();
  void set_allocated_oldpath(std::string* oldpath);
  private:
  const std::string& _internal_oldpath() const;
  void _internal_set_oldpath(const std::string& value);
  std::string* _internal_mutable_oldpath();
  public:

  // string newPath = 2;
  void clear_newpath();
  const std::string& newpath() const;
  void set_newpath(const std::string& value);
  void set_newpath(std::string&& value);
  void set_newpath(const char* value);
  void set_newpath(const char* value, size_t size);
  std::string* mutable_newpath();
  std::string* release_newpath();
  void set_allocated_newpath(std::string* newpath);
  private:
  const std::string& _internal_newpath() const;
  void _internal_set_newpath(const std::string& value);
  std::string* _internal_mutable_newpath();
  public:

  // @@protoc_insertion_point(class_scope:CreateFileHook.SendPathDataRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr oldpath_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr newpath_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CreateFileHook_2eproto;
};
// -------------------------------------------------------------------

class SendPathDataReply PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CreateFileHook.SendPathDataReply) */ {
 public:
  inline SendPathDataReply() : SendPathDataReply(nullptr) {}
  virtual ~SendPathDataReply();

  SendPathDataReply(const SendPathDataReply& from);
  SendPathDataReply(SendPathDataReply&& from) noexcept
    : SendPathDataReply() {
    *this = ::std::move(from);
  }

  inline SendPathDataReply& operator=(const SendPathDataReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline SendPathDataReply& operator=(SendPathDataReply&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const SendPathDataReply& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SendPathDataReply* internal_default_instance() {
    return reinterpret_cast<const SendPathDataReply*>(
               &_SendPathDataReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    4;

  friend void swap(SendPathDataReply& a, SendPathDataReply& b) {
    a.Swap(&b);
  }
  inline void Swap(SendPathDataReply* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(SendPathDataReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SendPathDataReply* New() const final {
    return CreateMaybeMessage<SendPathDataReply>(nullptr);
  }

  SendPathDataReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SendPathDataReply>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const SendPathDataReply& from);
  void MergeFrom(const SendPathDataReply& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SendPathDataReply* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CreateFileHook.SendPathDataReply";
  }
  protected:
  explicit SendPathDataReply(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CreateFileHook_2eproto);
    return ::descriptor_table_CreateFileHook_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:CreateFileHook.SendPathDataReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CreateFileHook_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

// -------------------------------------------------------------------

// ShouldSendPathDataRequest

// string path = 1;
inline void ShouldSendPathDataRequest::clear_path() {
  path_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ShouldSendPathDataRequest::path() const {
  // @@protoc_insertion_point(field_get:CreateFileHook.ShouldSendPathDataRequest.path)
  return _internal_path();
}
inline void ShouldSendPathDataRequest::set_path(const std::string& value) {
  _internal_set_path(value);
  // @@protoc_insertion_point(field_set:CreateFileHook.ShouldSendPathDataRequest.path)
}
inline std::string* ShouldSendPathDataRequest::mutable_path() {
  // @@protoc_insertion_point(field_mutable:CreateFileHook.ShouldSendPathDataRequest.path)
  return _internal_mutable_path();
}
inline const std::string& ShouldSendPathDataRequest::_internal_path() const {
  return path_.Get();
}
inline void ShouldSendPathDataRequest::_internal_set_path(const std::string& value) {
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ShouldSendPathDataRequest::set_path(std::string&& value) {
  
  path_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CreateFileHook.ShouldSendPathDataRequest.path)
}
inline void ShouldSendPathDataRequest::set_path(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CreateFileHook.ShouldSendPathDataRequest.path)
}
inline void ShouldSendPathDataRequest::set_path(const char* value,
    size_t size) {
  
  path_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CreateFileHook.ShouldSendPathDataRequest.path)
}
inline std::string* ShouldSendPathDataRequest::_internal_mutable_path() {
  
  return path_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ShouldSendPathDataRequest::release_path() {
  // @@protoc_insertion_point(field_release:CreateFileHook.ShouldSendPathDataRequest.path)
  return path_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ShouldSendPathDataRequest::set_allocated_path(std::string* path) {
  if (path != nullptr) {
    
  } else {
    
  }
  path_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), path,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CreateFileHook.ShouldSendPathDataRequest.path)
}

// -------------------------------------------------------------------

// ShouldSendPathDataReply

// bool should = 1;
inline void ShouldSendPathDataReply::clear_should() {
  should_ = false;
}
inline bool ShouldSendPathDataReply::_internal_should() const {
  return should_;
}
inline bool ShouldSendPathDataReply::should() const {
  // @@protoc_insertion_point(field_get:CreateFileHook.ShouldSendPathDataReply.should)
  return _internal_should();
}
inline void ShouldSendPathDataReply::_internal_set_should(bool value) {
  
  should_ = value;
}
inline void ShouldSendPathDataReply::set_should(bool value) {
  _internal_set_should(value);
  // @@protoc_insertion_point(field_set:CreateFileHook.ShouldSendPathDataReply.should)
}

// -------------------------------------------------------------------

// SendPathDataRequest

// string oldPath = 1;
inline void SendPathDataRequest::clear_oldpath() {
  oldpath_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SendPathDataRequest::oldpath() const {
  // @@protoc_insertion_point(field_get:CreateFileHook.SendPathDataRequest.oldPath)
  return _internal_oldpath();
}
inline void SendPathDataRequest::set_oldpath(const std::string& value) {
  _internal_set_oldpath(value);
  // @@protoc_insertion_point(field_set:CreateFileHook.SendPathDataRequest.oldPath)
}
inline std::string* SendPathDataRequest::mutable_oldpath() {
  // @@protoc_insertion_point(field_mutable:CreateFileHook.SendPathDataRequest.oldPath)
  return _internal_mutable_oldpath();
}
inline const std::string& SendPathDataRequest::_internal_oldpath() const {
  return oldpath_.Get();
}
inline void SendPathDataRequest::_internal_set_oldpath(const std::string& value) {
  
  oldpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SendPathDataRequest::set_oldpath(std::string&& value) {
  
  oldpath_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CreateFileHook.SendPathDataRequest.oldPath)
}
inline void SendPathDataRequest::set_oldpath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  oldpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CreateFileHook.SendPathDataRequest.oldPath)
}
inline void SendPathDataRequest::set_oldpath(const char* value,
    size_t size) {
  
  oldpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CreateFileHook.SendPathDataRequest.oldPath)
}
inline std::string* SendPathDataRequest::_internal_mutable_oldpath() {
  
  return oldpath_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SendPathDataRequest::release_oldpath() {
  // @@protoc_insertion_point(field_release:CreateFileHook.SendPathDataRequest.oldPath)
  return oldpath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SendPathDataRequest::set_allocated_oldpath(std::string* oldpath) {
  if (oldpath != nullptr) {
    
  } else {
    
  }
  oldpath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), oldpath,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CreateFileHook.SendPathDataRequest.oldPath)
}

// string newPath = 2;
inline void SendPathDataRequest::clear_newpath() {
  newpath_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& SendPathDataRequest::newpath() const {
  // @@protoc_insertion_point(field_get:CreateFileHook.SendPathDataRequest.newPath)
  return _internal_newpath();
}
inline void SendPathDataRequest::set_newpath(const std::string& value) {
  _internal_set_newpath(value);
  // @@protoc_insertion_point(field_set:CreateFileHook.SendPathDataRequest.newPath)
}
inline std::string* SendPathDataRequest::mutable_newpath() {
  // @@protoc_insertion_point(field_mutable:CreateFileHook.SendPathDataRequest.newPath)
  return _internal_mutable_newpath();
}
inline const std::string& SendPathDataRequest::_internal_newpath() const {
  return newpath_.Get();
}
inline void SendPathDataRequest::_internal_set_newpath(const std::string& value) {
  
  newpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void SendPathDataRequest::set_newpath(std::string&& value) {
  
  newpath_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:CreateFileHook.SendPathDataRequest.newPath)
}
inline void SendPathDataRequest::set_newpath(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  newpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:CreateFileHook.SendPathDataRequest.newPath)
}
inline void SendPathDataRequest::set_newpath(const char* value,
    size_t size) {
  
  newpath_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:CreateFileHook.SendPathDataRequest.newPath)
}
inline std::string* SendPathDataRequest::_internal_mutable_newpath() {
  
  return newpath_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* SendPathDataRequest::release_newpath() {
  // @@protoc_insertion_point(field_release:CreateFileHook.SendPathDataRequest.newPath)
  return newpath_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void SendPathDataRequest::set_allocated_newpath(std::string* newpath) {
  if (newpath != nullptr) {
    
  } else {
    
  }
  newpath_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), newpath,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:CreateFileHook.SendPathDataRequest.newPath)
}

// -------------------------------------------------------------------

// SendPathDataReply

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace CreateFileHook

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CreateFileHook_2eproto
