// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/android_polled_state_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto

#include <cstdint>
#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidPolledStateConfig;
struct AndroidPolledStateConfigDefaultTypeInternal;
extern AndroidPolledStateConfigDefaultTypeInternal _AndroidPolledStateConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidPolledStateConfig* Arena::CreateMaybeMessage<::perfetto::protos::AndroidPolledStateConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class AndroidPolledStateConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidPolledStateConfig) */ {
 public:
  inline AndroidPolledStateConfig() : AndroidPolledStateConfig(nullptr) {}
  ~AndroidPolledStateConfig() override;
  explicit PROTOBUF_CONSTEXPR AndroidPolledStateConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidPolledStateConfig(const AndroidPolledStateConfig& from);
  AndroidPolledStateConfig(AndroidPolledStateConfig&& from) noexcept
    : AndroidPolledStateConfig() {
    *this = ::std::move(from);
  }

  inline AndroidPolledStateConfig& operator=(const AndroidPolledStateConfig& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline AndroidPolledStateConfig& operator=(AndroidPolledStateConfig&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const AndroidPolledStateConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidPolledStateConfig* internal_default_instance() {
    return reinterpret_cast<const AndroidPolledStateConfig*>(
               &_AndroidPolledStateConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidPolledStateConfig& a, AndroidPolledStateConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(AndroidPolledStateConfig* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AndroidPolledStateConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidPolledStateConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AndroidPolledStateConfig>(arena);
  }
  AndroidPolledStateConfig* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidPolledStateConfig& from);
  void MergeFrom(const AndroidPolledStateConfig& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AndroidPolledStateConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidPolledStateConfig";
  }
  protected:
  explicit AndroidPolledStateConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPollMsFieldNumber = 1,
  };
  // optional uint32 poll_ms = 1;
  bool has_poll_ms() const;
  private:
  bool _internal_has_poll_ms() const;
  public:
  void clear_poll_ms();
  ::uint32_t poll_ms() const;
  void set_poll_ms(::uint32_t value);
  private:
  ::uint32_t _internal_poll_ms() const;
  void _internal_set_poll_ms(::uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidPolledStateConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t poll_ms_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidPolledStateConfig

// optional uint32 poll_ms = 1;
inline bool AndroidPolledStateConfig::_internal_has_poll_ms() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AndroidPolledStateConfig::has_poll_ms() const {
  return _internal_has_poll_ms();
}
inline void AndroidPolledStateConfig::clear_poll_ms() {
  _impl_.poll_ms_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t AndroidPolledStateConfig::_internal_poll_ms() const {
  return _impl_.poll_ms_;
}
inline ::uint32_t AndroidPolledStateConfig::poll_ms() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidPolledStateConfig.poll_ms)
  return _internal_poll_ms();
}
inline void AndroidPolledStateConfig::_internal_set_poll_ms(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.poll_ms_ = value;
}
inline void AndroidPolledStateConfig::set_poll_ms(::uint32_t value) {
  _internal_set_poll_ms(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidPolledStateConfig.poll_ms)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5fpolled_5fstate_5fconfig_2eproto
