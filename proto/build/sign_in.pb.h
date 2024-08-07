// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: sign_in.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_sign_5fin_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_sign_5fin_2eproto_2epb_2eh

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

#define PROTOBUF_INTERNAL_EXPORT_sign_5fin_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_sign_5fin_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_sign_5fin_2eproto;
class Sign_in;
struct Sign_inDefaultTypeInternal;
extern Sign_inDefaultTypeInternal _Sign_in_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Sign_in final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:Sign_in) */ {
 public:
  inline Sign_in() : Sign_in(nullptr) {}
  ~Sign_in() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Sign_in(
      ::google::protobuf::internal::ConstantInitialized);

  inline Sign_in(const Sign_in& from) : Sign_in(nullptr, from) {}
  inline Sign_in(Sign_in&& from) noexcept
      : Sign_in(nullptr, std::move(from)) {}
  inline Sign_in& operator=(const Sign_in& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sign_in& operator=(Sign_in&& from) noexcept {
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
  static const Sign_in& default_instance() {
    return *internal_default_instance();
  }
  static inline const Sign_in* internal_default_instance() {
    return reinterpret_cast<const Sign_in*>(
        &_Sign_in_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Sign_in& a, Sign_in& b) { a.Swap(&b); }
  inline void Swap(Sign_in* other) {
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
  void UnsafeArenaSwap(Sign_in* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Sign_in* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<Sign_in>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const Sign_in& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const Sign_in& from) { Sign_in::MergeImpl(*this, from); }

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
  void InternalSwap(Sign_in* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Sign_in"; }

 protected:
  explicit Sign_in(::google::protobuf::Arena* arena);
  Sign_in(::google::protobuf::Arena* arena, const Sign_in& from);
  Sign_in(::google::protobuf::Arena* arena, Sign_in&& from) noexcept
      : Sign_in(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kUserNameFieldNumber = 1,
    kUserPasswordFieldNumber = 2,
  };
  // string user_name = 1;
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
  // string user_password = 2;
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
  // @@protoc_insertion_point(class_scope:Sign_in)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      1, 2, 0,
      38, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Sign_in_default_instance_;

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
                          const Sign_in& from_msg);
    ::google::protobuf::internal::ArenaStringPtr user_name_;
    ::google::protobuf::internal::ArenaStringPtr user_password_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_sign_5fin_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Sign_in

// string user_name = 1;
inline void Sign_in::clear_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.ClearToEmpty();
}
inline const std::string& Sign_in::user_name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Sign_in.user_name)
  return _internal_user_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Sign_in::set_user_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Sign_in.user_name)
}
inline std::string* Sign_in::mutable_user_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_name();
  // @@protoc_insertion_point(field_mutable:Sign_in.user_name)
  return _s;
}
inline const std::string& Sign_in::_internal_user_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_name_.Get();
}
inline void Sign_in::_internal_set_user_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.Set(value, GetArena());
}
inline std::string* Sign_in::_internal_mutable_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_name_.Mutable( GetArena());
}
inline std::string* Sign_in::release_user_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Sign_in.user_name)
  return _impl_.user_name_.Release();
}
inline void Sign_in::set_allocated_user_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_name_.IsDefault()) {
          _impl_.user_name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Sign_in.user_name)
}

// string user_password = 2;
inline void Sign_in::clear_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.ClearToEmpty();
}
inline const std::string& Sign_in::user_password() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:Sign_in.user_password)
  return _internal_user_password();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Sign_in::set_user_password(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:Sign_in.user_password)
}
inline std::string* Sign_in::mutable_user_password() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_user_password();
  // @@protoc_insertion_point(field_mutable:Sign_in.user_password)
  return _s;
}
inline const std::string& Sign_in::_internal_user_password() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.user_password_.Get();
}
inline void Sign_in::_internal_set_user_password(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.Set(value, GetArena());
}
inline std::string* Sign_in::_internal_mutable_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.user_password_.Mutable( GetArena());
}
inline std::string* Sign_in::release_user_password() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:Sign_in.user_password)
  return _impl_.user_password_.Release();
}
inline void Sign_in::set_allocated_user_password(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.user_password_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.user_password_.IsDefault()) {
          _impl_.user_password_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Sign_in.user_password)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_sign_5fin_2eproto_2epb_2eh
