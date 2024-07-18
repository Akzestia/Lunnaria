// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: user.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_user_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_user_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_user_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_user_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_user_2eproto;
class User;
struct UserDefaultTypeInternal;
extern UserDefaultTypeInternal _User_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class User final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:User) */ {
 public:
  inline User() : User(nullptr) {}
  ~User() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR User(
      ::google::protobuf::internal::ConstantInitialized);

  inline User(const User& from) : User(nullptr, from) {}
  inline User(User&& from) noexcept
      : User(nullptr, std::move(from)) {}
  inline User& operator=(const User& from) {
    CopyFrom(from);
    return *this;
  }
  inline User& operator=(User&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const User& default_instance() {
    return *internal_default_instance();
  }
  static inline const User* internal_default_instance() {
    return reinterpret_cast<const User*>(
        &_User_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(User& a, User& b) { a.Swap(&b); }
  inline void Swap(User* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(User* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  User* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<User>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const User& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const User& from) { User::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(User* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "User"; }

 protected:
  explicit User(::google::protobuf::Arena* arena);
  User(::google::protobuf::Arena* arena, const User& from);
  User(::google::protobuf::Arena* arena, User&& from) noexcept
      : User(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kDisplayNameFieldNumber = 1,
    kUserNameFieldNumber = 2,
    kUserEmailFieldNumber = 3,
    kUserPasswordFieldNumber = 4,
    kUserAvatarFieldNumber = 5,
    kOnlineStatusFieldNumber = 6,
  };
  // string display_name = 1;
  void clear_display_name() ;
  const std::string& display_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_display_name(Arg_&& arg, Args_... args);
  std::string* mutable_display_name();
  PROTOBUF_NODISCARD std::string* release_display_name();
  void set_allocated_display_name(std::string* value);

  private:
  const std::string& _internal_display_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_display_name(
      const std::string& value);
  std::string* _internal_mutable_display_name();

  public:
  // string user_name = 2;
  void clear_user_name() ;
  const std::string& user_name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_user_name(Arg_&& arg, Args_... args);
  std::string* mutable_user_name();
  PROTOBUF_NODISCARD std::string* release_user_name();
  void set_allocated_user_name(std::string* value);

  private:
  const std::string& _internal_user_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_name(
      const std::string& value);
  std::string* _internal_mutable_user_name();

  public:
  // string user_email = 3;
  void clear_user_email() ;
  const std::string& user_email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_user_email(Arg_&& arg, Args_... args);
  std::string* mutable_user_email();
  PROTOBUF_NODISCARD std::string* release_user_email();
  void set_allocated_user_email(std::string* value);

  private:
  const std::string& _internal_user_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_email(
      const std::string& value);
  std::string* _internal_mutable_user_email();

  public:
  // string user_password = 4;
  void clear_user_password() ;
  const std::string& user_password() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_user_password(Arg_&& arg, Args_... args);
  std::string* mutable_user_password();
  PROTOBUF_NODISCARD std::string* release_user_password();
  void set_allocated_user_password(std::string* value);

  private:
  const std::string& _internal_user_password() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_password(
      const std::string& value);
  std::string* _internal_mutable_user_password();

  public:
  // bytes user_avatar = 5;
  void clear_user_avatar() ;
  const std::string& user_avatar() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_user_avatar(Arg_&& arg, Args_... args);
  std::string* mutable_user_avatar();
  PROTOBUF_NODISCARD std::string* release_user_avatar();
  void set_allocated_user_avatar(std::string* value);

  private:
  const std::string& _internal_user_avatar() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_user_avatar(
      const std::string& value);
  std::string* _internal_mutable_user_avatar();

  public:
  // sint32 online_status = 6;
  void clear_online_status() ;
  ::int32_t online_status() const;
  void set_online_status(::int32_t value);

  private:
  ::int32_t _internal_online_status() const;
  void _internal_set_online_status(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:User)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 6, 0,
      57, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_User_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const User& from_msg);
    ::google::protobuf::internal::ArenaStringPtr display_name_;
    ::google::protobuf::internal::ArenaStringPtr user_name_;
    ::google::protobuf::internal::ArenaStringPtr user_email_;
    ::google::protobuf::internal::ArenaStringPtr user_password_;
    ::google::protobuf::internal::ArenaStringPtr user_avatar_;
    ::int32_t online_status_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_user_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// User

// string display_name = 1;
inline void User::clear_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.ClearToEmpty();
}
inline const std::string& User::display_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.display_name)
  return _internal_display_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void User::set_display_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.display_name)
}
inline std::string* User::mutable_display_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_display_name();
  // @@protoc_insertion_point(field_mutable:User.display_name)
  return _s;
}
inline const std::string& User::_internal_display_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.display_name_.Get();
}
inline void User::_internal_set_display_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.Set(value, GetArena());
}
inline std::string* User::_internal_mutable_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.display_name_.Mutable( GetArena());
}
inline std::string* User::release_display_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:User.display_name)
  return _impl_.display_name_.Release();
}
inline void User::set_allocated_display_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.display_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.display_name_.IsDefault()) {
          _impl_.display_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.display_name)
}

// string user_name = 2;
inline void User::clear_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.ClearToEmpty();
}
inline const std::string& User::user_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.user_name)
  return _internal_user_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void User::set_user_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.user_name)
}
inline std::string* User::mutable_user_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:User.user_name)
  return _s;
}
inline const std::string& User::_internal_user_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_name_.Get();
}
inline void User::_internal_set_user_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.Set(value, GetArena());
}
inline std::string* User::_internal_mutable_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_name_.Mutable( GetArena());
}
inline std::string* User::release_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:User.user_name)
  return _impl_.user_name_.Release();
}
inline void User::set_allocated_user_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_name_.IsDefault()) {
          _impl_.user_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.user_name)
}

// string user_email = 3;
inline void User::clear_user_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_email_.ClearToEmpty();
}
inline const std::string& User::user_email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.user_email)
  return _internal_user_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void User::set_user_email(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.user_email)
}
inline std::string* User::mutable_user_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_email();
  // @@protoc_insertion_point(field_mutable:User.user_email)
  return _s;
}
inline const std::string& User::_internal_user_email() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_email_.Get();
}
inline void User::_internal_set_user_email(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_email_.Set(value, GetArena());
}
inline std::string* User::_internal_mutable_user_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_email_.Mutable( GetArena());
}
inline std::string* User::release_user_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:User.user_email)
  return _impl_.user_email_.Release();
}
inline void User::set_allocated_user_email(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_email_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_email_.IsDefault()) {
          _impl_.user_email_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.user_email)
}

// string user_password = 4;
inline void User::clear_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.ClearToEmpty();
}
inline const std::string& User::user_password() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.user_password)
  return _internal_user_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void User::set_user_password(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.user_password)
}
inline std::string* User::mutable_user_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_password();
  // @@protoc_insertion_point(field_mutable:User.user_password)
  return _s;
}
inline const std::string& User::_internal_user_password() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_password_.Get();
}
inline void User::_internal_set_user_password(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.Set(value, GetArena());
}
inline std::string* User::_internal_mutable_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_password_.Mutable( GetArena());
}
inline std::string* User::release_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:User.user_password)
  return _impl_.user_password_.Release();
}
inline void User::set_allocated_user_password(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_password_.IsDefault()) {
          _impl_.user_password_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.user_password)
}

// bytes user_avatar = 5;
inline void User::clear_user_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_avatar_.ClearToEmpty();
}
inline const std::string& User::user_avatar() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:User.user_avatar)
  return _internal_user_avatar();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void User::set_user_avatar(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_avatar_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:User.user_avatar)
}
inline std::string* User::mutable_user_avatar() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_avatar();
  // @@protoc_insertion_point(field_mutable:User.user_avatar)
  return _s;
}
inline const std::string& User::_internal_user_avatar() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_avatar_.Get();
}
inline void User::_internal_set_user_avatar(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_avatar_.Set(value, GetArena());
}
inline std::string* User::_internal_mutable_user_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_avatar_.Mutable( GetArena());
}
inline std::string* User::release_user_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:User.user_avatar)
  return _impl_.user_avatar_.Release();
}
inline void User::set_allocated_user_avatar(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_avatar_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_avatar_.IsDefault()) {
          _impl_.user_avatar_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:User.user_avatar)
}

// sint32 online_status = 6;
inline void User::clear_online_status() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.online_status_ = 0;
}
inline ::int32_t User::online_status() const {
  // @@protoc_insertion_point(field_get:User.online_status)
  return _internal_online_status();
}
inline void User::set_online_status(::int32_t value) {
  _internal_set_online_status(value);
  // @@protoc_insertion_point(field_set:User.online_status)
}
inline ::int32_t User::_internal_online_status() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.online_status_;
}
inline void User::_internal_set_online_status(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.online_status_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_user_2eproto_2epb_2eh
