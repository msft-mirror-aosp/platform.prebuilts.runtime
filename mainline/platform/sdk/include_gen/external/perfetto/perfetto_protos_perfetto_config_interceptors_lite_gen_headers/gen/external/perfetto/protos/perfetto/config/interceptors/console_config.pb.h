// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/interceptors/console_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ConsoleConfig;
struct ConsoleConfigDefaultTypeInternal;
extern ConsoleConfigDefaultTypeInternal _ConsoleConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ConsoleConfig* Arena::CreateMaybeMessage<::perfetto::protos::ConsoleConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum ConsoleConfig_Output : int {
  ConsoleConfig_Output_OUTPUT_UNSPECIFIED = 0,
  ConsoleConfig_Output_OUTPUT_STDOUT = 1,
  ConsoleConfig_Output_OUTPUT_STDERR = 2
};
bool ConsoleConfig_Output_IsValid(int value);
constexpr ConsoleConfig_Output ConsoleConfig_Output_Output_MIN = ConsoleConfig_Output_OUTPUT_UNSPECIFIED;
constexpr ConsoleConfig_Output ConsoleConfig_Output_Output_MAX = ConsoleConfig_Output_OUTPUT_STDERR;
constexpr int ConsoleConfig_Output_Output_ARRAYSIZE = ConsoleConfig_Output_Output_MAX + 1;

const std::string& ConsoleConfig_Output_Name(ConsoleConfig_Output value);
template<typename T>
inline const std::string& ConsoleConfig_Output_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ConsoleConfig_Output>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ConsoleConfig_Output_Name.");
  return ConsoleConfig_Output_Name(static_cast<ConsoleConfig_Output>(enum_t_value));
}
bool ConsoleConfig_Output_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ConsoleConfig_Output* value);
// ===================================================================

class ConsoleConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ConsoleConfig) */ {
 public:
  inline ConsoleConfig() : ConsoleConfig(nullptr) {}
  ~ConsoleConfig() override;
  explicit PROTOBUF_CONSTEXPR ConsoleConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ConsoleConfig(const ConsoleConfig& from);
  ConsoleConfig(ConsoleConfig&& from) noexcept
    : ConsoleConfig() {
    *this = ::std::move(from);
  }

  inline ConsoleConfig& operator=(const ConsoleConfig& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline ConsoleConfig& operator=(ConsoleConfig&& from) noexcept {
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

  static const ConsoleConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const ConsoleConfig* internal_default_instance() {
    return reinterpret_cast<const ConsoleConfig*>(
               &_ConsoleConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ConsoleConfig& a, ConsoleConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(ConsoleConfig* other) {
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
  void UnsafeArenaSwap(ConsoleConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ConsoleConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ConsoleConfig>(arena);
  }
  ConsoleConfig* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ConsoleConfig& from);
  void MergeFrom(const ConsoleConfig& from);
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
  void InternalSwap(ConsoleConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ConsoleConfig";
  }
  protected:
  explicit ConsoleConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ConsoleConfig_Output Output;
  static constexpr Output OUTPUT_UNSPECIFIED =
    ConsoleConfig_Output_OUTPUT_UNSPECIFIED;
  static constexpr Output OUTPUT_STDOUT =
    ConsoleConfig_Output_OUTPUT_STDOUT;
  static constexpr Output OUTPUT_STDERR =
    ConsoleConfig_Output_OUTPUT_STDERR;
  static inline bool Output_IsValid(int value) {
    return ConsoleConfig_Output_IsValid(value);
  }
  static constexpr Output Output_MIN =
    ConsoleConfig_Output_Output_MIN;
  static constexpr Output Output_MAX =
    ConsoleConfig_Output_Output_MAX;
  static constexpr int Output_ARRAYSIZE =
    ConsoleConfig_Output_Output_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Output_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Output>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Output_Name.");
    return ConsoleConfig_Output_Name(enum_t_value);
  }
  static inline bool Output_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Output* value) {
    return ConsoleConfig_Output_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kOutputFieldNumber = 1,
    kEnableColorsFieldNumber = 2,
  };
  // optional .perfetto.protos.ConsoleConfig.Output output = 1;
  bool has_output() const;
  private:
  bool _internal_has_output() const;
  public:
  void clear_output();
  ::perfetto::protos::ConsoleConfig_Output output() const;
  void set_output(::perfetto::protos::ConsoleConfig_Output value);
  private:
  ::perfetto::protos::ConsoleConfig_Output _internal_output() const;
  void _internal_set_output(::perfetto::protos::ConsoleConfig_Output value);
  public:

  // optional bool enable_colors = 2;
  bool has_enable_colors() const;
  private:
  bool _internal_has_enable_colors() const;
  public:
  void clear_enable_colors();
  bool enable_colors() const;
  void set_enable_colors(bool value);
  private:
  bool _internal_enable_colors() const;
  void _internal_set_enable_colors(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ConsoleConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int output_;
    bool enable_colors_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ConsoleConfig

// optional .perfetto.protos.ConsoleConfig.Output output = 1;
inline bool ConsoleConfig::_internal_has_output() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ConsoleConfig::has_output() const {
  return _internal_has_output();
}
inline void ConsoleConfig::clear_output() {
  _impl_.output_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::ConsoleConfig_Output ConsoleConfig::_internal_output() const {
  return static_cast< ::perfetto::protos::ConsoleConfig_Output >(_impl_.output_);
}
inline ::perfetto::protos::ConsoleConfig_Output ConsoleConfig::output() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ConsoleConfig.output)
  return _internal_output();
}
inline void ConsoleConfig::_internal_set_output(::perfetto::protos::ConsoleConfig_Output value) {
  assert(::perfetto::protos::ConsoleConfig_Output_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.output_ = value;
}
inline void ConsoleConfig::set_output(::perfetto::protos::ConsoleConfig_Output value) {
  _internal_set_output(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ConsoleConfig.output)
}

// optional bool enable_colors = 2;
inline bool ConsoleConfig::_internal_has_enable_colors() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ConsoleConfig::has_enable_colors() const {
  return _internal_has_enable_colors();
}
inline void ConsoleConfig::clear_enable_colors() {
  _impl_.enable_colors_ = false;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline bool ConsoleConfig::_internal_enable_colors() const {
  return _impl_.enable_colors_;
}
inline bool ConsoleConfig::enable_colors() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ConsoleConfig.enable_colors)
  return _internal_enable_colors();
}
inline void ConsoleConfig::_internal_set_enable_colors(bool value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.enable_colors_ = value;
}
inline void ConsoleConfig::set_enable_colors(bool value) {
  _internal_set_enable_colors(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ConsoleConfig.enable_colors)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::ConsoleConfig_Output> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2finterceptors_2fconsole_5fconfig_2eproto
