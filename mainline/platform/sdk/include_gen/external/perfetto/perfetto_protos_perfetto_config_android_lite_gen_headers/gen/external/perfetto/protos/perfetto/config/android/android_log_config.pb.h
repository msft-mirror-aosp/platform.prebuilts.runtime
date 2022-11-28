// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/config/android/android_log_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto

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
#include "protos/perfetto/common/android_log_constants.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class AndroidLogConfig;
struct AndroidLogConfigDefaultTypeInternal;
extern AndroidLogConfigDefaultTypeInternal _AndroidLogConfig_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::AndroidLogConfig* Arena::CreateMaybeMessage<::perfetto::protos::AndroidLogConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class AndroidLogConfig final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.AndroidLogConfig) */ {
 public:
  inline AndroidLogConfig() : AndroidLogConfig(nullptr) {}
  ~AndroidLogConfig() override;
  explicit PROTOBUF_CONSTEXPR AndroidLogConfig(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AndroidLogConfig(const AndroidLogConfig& from);
  AndroidLogConfig(AndroidLogConfig&& from) noexcept
    : AndroidLogConfig() {
    *this = ::std::move(from);
  }

  inline AndroidLogConfig& operator=(const AndroidLogConfig& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline AndroidLogConfig& operator=(AndroidLogConfig&& from) noexcept {
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

  static const AndroidLogConfig& default_instance() {
    return *internal_default_instance();
  }
  static inline const AndroidLogConfig* internal_default_instance() {
    return reinterpret_cast<const AndroidLogConfig*>(
               &_AndroidLogConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AndroidLogConfig& a, AndroidLogConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(AndroidLogConfig* other) {
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
  void UnsafeArenaSwap(AndroidLogConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AndroidLogConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<AndroidLogConfig>(arena);
  }
  AndroidLogConfig* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const AndroidLogConfig& from);
  void MergeFrom(const AndroidLogConfig& from);
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
  void InternalSwap(AndroidLogConfig* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.AndroidLogConfig";
  }
  protected:
  explicit AndroidLogConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLogIdsFieldNumber = 1,
    kFilterTagsFieldNumber = 4,
    kMinPrioFieldNumber = 3,
  };
  // repeated .perfetto.protos.AndroidLogId log_ids = 1;
  int log_ids_size() const;
  private:
  int _internal_log_ids_size() const;
  public:
  void clear_log_ids();
  private:
  ::perfetto::protos::AndroidLogId _internal_log_ids(int index) const;
  void _internal_add_log_ids(::perfetto::protos::AndroidLogId value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_log_ids();
  public:
  ::perfetto::protos::AndroidLogId log_ids(int index) const;
  void set_log_ids(int index, ::perfetto::protos::AndroidLogId value);
  void add_log_ids(::perfetto::protos::AndroidLogId value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& log_ids() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_log_ids();

  // repeated string filter_tags = 4;
  int filter_tags_size() const;
  private:
  int _internal_filter_tags_size() const;
  public:
  void clear_filter_tags();
  const std::string& filter_tags(int index) const;
  std::string* mutable_filter_tags(int index);
  void set_filter_tags(int index, const std::string& value);
  void set_filter_tags(int index, std::string&& value);
  void set_filter_tags(int index, const char* value);
  void set_filter_tags(int index, const char* value, size_t size);
  std::string* add_filter_tags();
  void add_filter_tags(const std::string& value);
  void add_filter_tags(std::string&& value);
  void add_filter_tags(const char* value);
  void add_filter_tags(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& filter_tags() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_filter_tags();
  private:
  const std::string& _internal_filter_tags(int index) const;
  std::string* _internal_add_filter_tags();
  public:

  // optional .perfetto.protos.AndroidLogPriority min_prio = 3;
  bool has_min_prio() const;
  private:
  bool _internal_has_min_prio() const;
  public:
  void clear_min_prio();
  ::perfetto::protos::AndroidLogPriority min_prio() const;
  void set_min_prio(::perfetto::protos::AndroidLogPriority value);
  private:
  ::perfetto::protos::AndroidLogPriority _internal_min_prio() const;
  void _internal_set_min_prio(::perfetto::protos::AndroidLogPriority value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.AndroidLogConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> log_ids_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> filter_tags_;
    int min_prio_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AndroidLogConfig

// repeated .perfetto.protos.AndroidLogId log_ids = 1;
inline int AndroidLogConfig::_internal_log_ids_size() const {
  return _impl_.log_ids_.size();
}
inline int AndroidLogConfig::log_ids_size() const {
  return _internal_log_ids_size();
}
inline void AndroidLogConfig::clear_log_ids() {
  _impl_.log_ids_.Clear();
}
inline ::perfetto::protos::AndroidLogId AndroidLogConfig::_internal_log_ids(int index) const {
  return static_cast< ::perfetto::protos::AndroidLogId >(_impl_.log_ids_.Get(index));
}
inline ::perfetto::protos::AndroidLogId AndroidLogConfig::log_ids(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidLogConfig.log_ids)
  return _internal_log_ids(index);
}
inline void AndroidLogConfig::set_log_ids(int index, ::perfetto::protos::AndroidLogId value) {
  assert(::perfetto::protos::AndroidLogId_IsValid(value));
  _impl_.log_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidLogConfig.log_ids)
}
inline void AndroidLogConfig::_internal_add_log_ids(::perfetto::protos::AndroidLogId value) {
  assert(::perfetto::protos::AndroidLogId_IsValid(value));
  _impl_.log_ids_.Add(value);
}
inline void AndroidLogConfig::add_log_ids(::perfetto::protos::AndroidLogId value) {
  _internal_add_log_ids(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidLogConfig.log_ids)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
AndroidLogConfig::log_ids() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidLogConfig.log_ids)
  return _impl_.log_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
AndroidLogConfig::_internal_mutable_log_ids() {
  return &_impl_.log_ids_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
AndroidLogConfig::mutable_log_ids() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidLogConfig.log_ids)
  return _internal_mutable_log_ids();
}

// optional .perfetto.protos.AndroidLogPriority min_prio = 3;
inline bool AndroidLogConfig::_internal_has_min_prio() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool AndroidLogConfig::has_min_prio() const {
  return _internal_has_min_prio();
}
inline void AndroidLogConfig::clear_min_prio() {
  _impl_.min_prio_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::perfetto::protos::AndroidLogPriority AndroidLogConfig::_internal_min_prio() const {
  return static_cast< ::perfetto::protos::AndroidLogPriority >(_impl_.min_prio_);
}
inline ::perfetto::protos::AndroidLogPriority AndroidLogConfig::min_prio() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidLogConfig.min_prio)
  return _internal_min_prio();
}
inline void AndroidLogConfig::_internal_set_min_prio(::perfetto::protos::AndroidLogPriority value) {
  assert(::perfetto::protos::AndroidLogPriority_IsValid(value));
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.min_prio_ = value;
}
inline void AndroidLogConfig::set_min_prio(::perfetto::protos::AndroidLogPriority value) {
  _internal_set_min_prio(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidLogConfig.min_prio)
}

// repeated string filter_tags = 4;
inline int AndroidLogConfig::_internal_filter_tags_size() const {
  return _impl_.filter_tags_.size();
}
inline int AndroidLogConfig::filter_tags_size() const {
  return _internal_filter_tags_size();
}
inline void AndroidLogConfig::clear_filter_tags() {
  _impl_.filter_tags_.Clear();
}
inline std::string* AndroidLogConfig::add_filter_tags() {
  std::string* _s = _internal_add_filter_tags();
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.AndroidLogConfig.filter_tags)
  return _s;
}
inline const std::string& AndroidLogConfig::_internal_filter_tags(int index) const {
  return _impl_.filter_tags_.Get(index);
}
inline const std::string& AndroidLogConfig::filter_tags(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.AndroidLogConfig.filter_tags)
  return _internal_filter_tags(index);
}
inline std::string* AndroidLogConfig::mutable_filter_tags(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.AndroidLogConfig.filter_tags)
  return _impl_.filter_tags_.Mutable(index);
}
inline void AndroidLogConfig::set_filter_tags(int index, const std::string& value) {
  _impl_.filter_tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::set_filter_tags(int index, std::string&& value) {
  _impl_.filter_tags_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::set_filter_tags(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.filter_tags_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::set_filter_tags(int index, const char* value, size_t size) {
  _impl_.filter_tags_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline std::string* AndroidLogConfig::_internal_add_filter_tags() {
  return _impl_.filter_tags_.Add();
}
inline void AndroidLogConfig::add_filter_tags(const std::string& value) {
  _impl_.filter_tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::add_filter_tags(std::string&& value) {
  _impl_.filter_tags_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::add_filter_tags(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.filter_tags_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline void AndroidLogConfig::add_filter_tags(const char* value, size_t size) {
  _impl_.filter_tags_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.AndroidLogConfig.filter_tags)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
AndroidLogConfig::filter_tags() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.AndroidLogConfig.filter_tags)
  return _impl_.filter_tags_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
AndroidLogConfig::mutable_filter_tags() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.AndroidLogConfig.filter_tags)
  return &_impl_.filter_tags_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fconfig_2fandroid_2fandroid_5flog_5fconfig_2eproto
