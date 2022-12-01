// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/data_source_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto

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
#include "protos/perfetto/common/ftrace_descriptor.pb.h"
#include "protos/perfetto/common/gpu_counter_descriptor.pb.h"
#include "protos/perfetto/common/track_event_descriptor.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class DataSourceDescriptor;
struct DataSourceDescriptorDefaultTypeInternal;
extern DataSourceDescriptorDefaultTypeInternal _DataSourceDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::DataSourceDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::DataSourceDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class DataSourceDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.DataSourceDescriptor) */ {
 public:
  inline DataSourceDescriptor() : DataSourceDescriptor(nullptr) {}
  ~DataSourceDescriptor() override;
  explicit PROTOBUF_CONSTEXPR DataSourceDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DataSourceDescriptor(const DataSourceDescriptor& from);
  DataSourceDescriptor(DataSourceDescriptor&& from) noexcept
    : DataSourceDescriptor() {
    *this = ::std::move(from);
  }

  inline DataSourceDescriptor& operator=(const DataSourceDescriptor& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline DataSourceDescriptor& operator=(DataSourceDescriptor&& from) noexcept {
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

  static const DataSourceDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const DataSourceDescriptor* internal_default_instance() {
    return reinterpret_cast<const DataSourceDescriptor*>(
               &_DataSourceDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DataSourceDescriptor& a, DataSourceDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(DataSourceDescriptor* other) {
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
  void UnsafeArenaSwap(DataSourceDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DataSourceDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DataSourceDescriptor>(arena);
  }
  DataSourceDescriptor* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const DataSourceDescriptor& from);
  void MergeFrom(const DataSourceDescriptor& from);
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
  void InternalSwap(DataSourceDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.DataSourceDescriptor";
  }
  protected:
  explicit DataSourceDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kGpuCounterDescriptorFieldNumber = 5,
    kTrackEventDescriptorFieldNumber = 6,
    kFtraceDescriptorFieldNumber = 8,
    kIdFieldNumber = 7,
    kWillNotifyOnStopFieldNumber = 2,
    kWillNotifyOnStartFieldNumber = 3,
    kHandlesIncrementalStateClearFieldNumber = 4,
  };
  // optional string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .perfetto.protos.GpuCounterDescriptor gpu_counter_descriptor = 5 [lazy = true];
  bool has_gpu_counter_descriptor() const;
  private:
  bool _internal_has_gpu_counter_descriptor() const;
  public:
  void clear_gpu_counter_descriptor();
  const ::perfetto::protos::GpuCounterDescriptor& gpu_counter_descriptor() const;
  PROTOBUF_NODISCARD ::perfetto::protos::GpuCounterDescriptor* release_gpu_counter_descriptor();
  ::perfetto::protos::GpuCounterDescriptor* mutable_gpu_counter_descriptor();
  void set_allocated_gpu_counter_descriptor(::perfetto::protos::GpuCounterDescriptor* gpu_counter_descriptor);
  private:
  const ::perfetto::protos::GpuCounterDescriptor& _internal_gpu_counter_descriptor() const;
  ::perfetto::protos::GpuCounterDescriptor* _internal_mutable_gpu_counter_descriptor();
  public:
  void unsafe_arena_set_allocated_gpu_counter_descriptor(
      ::perfetto::protos::GpuCounterDescriptor* gpu_counter_descriptor);
  ::perfetto::protos::GpuCounterDescriptor* unsafe_arena_release_gpu_counter_descriptor();

  // optional .perfetto.protos.TrackEventDescriptor track_event_descriptor = 6 [lazy = true];
  bool has_track_event_descriptor() const;
  private:
  bool _internal_has_track_event_descriptor() const;
  public:
  void clear_track_event_descriptor();
  const ::perfetto::protos::TrackEventDescriptor& track_event_descriptor() const;
  PROTOBUF_NODISCARD ::perfetto::protos::TrackEventDescriptor* release_track_event_descriptor();
  ::perfetto::protos::TrackEventDescriptor* mutable_track_event_descriptor();
  void set_allocated_track_event_descriptor(::perfetto::protos::TrackEventDescriptor* track_event_descriptor);
  private:
  const ::perfetto::protos::TrackEventDescriptor& _internal_track_event_descriptor() const;
  ::perfetto::protos::TrackEventDescriptor* _internal_mutable_track_event_descriptor();
  public:
  void unsafe_arena_set_allocated_track_event_descriptor(
      ::perfetto::protos::TrackEventDescriptor* track_event_descriptor);
  ::perfetto::protos::TrackEventDescriptor* unsafe_arena_release_track_event_descriptor();

  // optional .perfetto.protos.FtraceDescriptor ftrace_descriptor = 8 [lazy = true];
  bool has_ftrace_descriptor() const;
  private:
  bool _internal_has_ftrace_descriptor() const;
  public:
  void clear_ftrace_descriptor();
  const ::perfetto::protos::FtraceDescriptor& ftrace_descriptor() const;
  PROTOBUF_NODISCARD ::perfetto::protos::FtraceDescriptor* release_ftrace_descriptor();
  ::perfetto::protos::FtraceDescriptor* mutable_ftrace_descriptor();
  void set_allocated_ftrace_descriptor(::perfetto::protos::FtraceDescriptor* ftrace_descriptor);
  private:
  const ::perfetto::protos::FtraceDescriptor& _internal_ftrace_descriptor() const;
  ::perfetto::protos::FtraceDescriptor* _internal_mutable_ftrace_descriptor();
  public:
  void unsafe_arena_set_allocated_ftrace_descriptor(
      ::perfetto::protos::FtraceDescriptor* ftrace_descriptor);
  ::perfetto::protos::FtraceDescriptor* unsafe_arena_release_ftrace_descriptor();

  // optional uint64 id = 7;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::uint64_t id() const;
  void set_id(::uint64_t value);
  private:
  ::uint64_t _internal_id() const;
  void _internal_set_id(::uint64_t value);
  public:

  // optional bool will_notify_on_stop = 2;
  bool has_will_notify_on_stop() const;
  private:
  bool _internal_has_will_notify_on_stop() const;
  public:
  void clear_will_notify_on_stop();
  bool will_notify_on_stop() const;
  void set_will_notify_on_stop(bool value);
  private:
  bool _internal_will_notify_on_stop() const;
  void _internal_set_will_notify_on_stop(bool value);
  public:

  // optional bool will_notify_on_start = 3;
  bool has_will_notify_on_start() const;
  private:
  bool _internal_has_will_notify_on_start() const;
  public:
  void clear_will_notify_on_start();
  bool will_notify_on_start() const;
  void set_will_notify_on_start(bool value);
  private:
  bool _internal_will_notify_on_start() const;
  void _internal_set_will_notify_on_start(bool value);
  public:

  // optional bool handles_incremental_state_clear = 4;
  bool has_handles_incremental_state_clear() const;
  private:
  bool _internal_has_handles_incremental_state_clear() const;
  public:
  void clear_handles_incremental_state_clear();
  bool handles_incremental_state_clear() const;
  void set_handles_incremental_state_clear(bool value);
  private:
  bool _internal_handles_incremental_state_clear() const;
  void _internal_set_handles_incremental_state_clear(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.DataSourceDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::perfetto::protos::GpuCounterDescriptor* gpu_counter_descriptor_;
    ::perfetto::protos::TrackEventDescriptor* track_event_descriptor_;
    ::perfetto::protos::FtraceDescriptor* ftrace_descriptor_;
    ::uint64_t id_;
    bool will_notify_on_stop_;
    bool will_notify_on_start_;
    bool handles_incremental_state_clear_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DataSourceDescriptor

// optional string name = 1;
inline bool DataSourceDescriptor::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool DataSourceDescriptor::has_name() const {
  return _internal_has_name();
}
inline void DataSourceDescriptor::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& DataSourceDescriptor::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void DataSourceDescriptor::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.name)
}
inline std::string* DataSourceDescriptor::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.DataSourceDescriptor.name)
  return _s;
}
inline const std::string& DataSourceDescriptor::_internal_name() const {
  return _impl_.name_.Get();
}
inline void DataSourceDescriptor::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* DataSourceDescriptor::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* DataSourceDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.DataSourceDescriptor.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void DataSourceDescriptor::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.DataSourceDescriptor.name)
}

// optional uint64 id = 7;
inline bool DataSourceDescriptor::_internal_has_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool DataSourceDescriptor::has_id() const {
  return _internal_has_id();
}
inline void DataSourceDescriptor::clear_id() {
  _impl_.id_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint64_t DataSourceDescriptor::_internal_id() const {
  return _impl_.id_;
}
inline ::uint64_t DataSourceDescriptor::id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.id)
  return _internal_id();
}
inline void DataSourceDescriptor::_internal_set_id(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.id_ = value;
}
inline void DataSourceDescriptor::set_id(::uint64_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.id)
}

// optional bool will_notify_on_stop = 2;
inline bool DataSourceDescriptor::_internal_has_will_notify_on_stop() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool DataSourceDescriptor::has_will_notify_on_stop() const {
  return _internal_has_will_notify_on_stop();
}
inline void DataSourceDescriptor::clear_will_notify_on_stop() {
  _impl_.will_notify_on_stop_ = false;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline bool DataSourceDescriptor::_internal_will_notify_on_stop() const {
  return _impl_.will_notify_on_stop_;
}
inline bool DataSourceDescriptor::will_notify_on_stop() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.will_notify_on_stop)
  return _internal_will_notify_on_stop();
}
inline void DataSourceDescriptor::_internal_set_will_notify_on_stop(bool value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.will_notify_on_stop_ = value;
}
inline void DataSourceDescriptor::set_will_notify_on_stop(bool value) {
  _internal_set_will_notify_on_stop(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.will_notify_on_stop)
}

// optional bool will_notify_on_start = 3;
inline bool DataSourceDescriptor::_internal_has_will_notify_on_start() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool DataSourceDescriptor::has_will_notify_on_start() const {
  return _internal_has_will_notify_on_start();
}
inline void DataSourceDescriptor::clear_will_notify_on_start() {
  _impl_.will_notify_on_start_ = false;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline bool DataSourceDescriptor::_internal_will_notify_on_start() const {
  return _impl_.will_notify_on_start_;
}
inline bool DataSourceDescriptor::will_notify_on_start() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.will_notify_on_start)
  return _internal_will_notify_on_start();
}
inline void DataSourceDescriptor::_internal_set_will_notify_on_start(bool value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.will_notify_on_start_ = value;
}
inline void DataSourceDescriptor::set_will_notify_on_start(bool value) {
  _internal_set_will_notify_on_start(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.will_notify_on_start)
}

// optional bool handles_incremental_state_clear = 4;
inline bool DataSourceDescriptor::_internal_has_handles_incremental_state_clear() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool DataSourceDescriptor::has_handles_incremental_state_clear() const {
  return _internal_has_handles_incremental_state_clear();
}
inline void DataSourceDescriptor::clear_handles_incremental_state_clear() {
  _impl_.handles_incremental_state_clear_ = false;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline bool DataSourceDescriptor::_internal_handles_incremental_state_clear() const {
  return _impl_.handles_incremental_state_clear_;
}
inline bool DataSourceDescriptor::handles_incremental_state_clear() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.handles_incremental_state_clear)
  return _internal_handles_incremental_state_clear();
}
inline void DataSourceDescriptor::_internal_set_handles_incremental_state_clear(bool value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.handles_incremental_state_clear_ = value;
}
inline void DataSourceDescriptor::set_handles_incremental_state_clear(bool value) {
  _internal_set_handles_incremental_state_clear(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.DataSourceDescriptor.handles_incremental_state_clear)
}

// optional .perfetto.protos.GpuCounterDescriptor gpu_counter_descriptor = 5 [lazy = true];
inline bool DataSourceDescriptor::_internal_has_gpu_counter_descriptor() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.gpu_counter_descriptor_ != nullptr);
  return value;
}
inline bool DataSourceDescriptor::has_gpu_counter_descriptor() const {
  return _internal_has_gpu_counter_descriptor();
}
inline const ::perfetto::protos::GpuCounterDescriptor& DataSourceDescriptor::_internal_gpu_counter_descriptor() const {
  const ::perfetto::protos::GpuCounterDescriptor* p = _impl_.gpu_counter_descriptor_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::GpuCounterDescriptor&>(
      ::perfetto::protos::_GpuCounterDescriptor_default_instance_);
}
inline const ::perfetto::protos::GpuCounterDescriptor& DataSourceDescriptor::gpu_counter_descriptor() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.gpu_counter_descriptor)
  return _internal_gpu_counter_descriptor();
}
inline void DataSourceDescriptor::unsafe_arena_set_allocated_gpu_counter_descriptor(
    ::perfetto::protos::GpuCounterDescriptor* gpu_counter_descriptor) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.gpu_counter_descriptor_);
  }
  _impl_.gpu_counter_descriptor_ = gpu_counter_descriptor;
  if (gpu_counter_descriptor) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.DataSourceDescriptor.gpu_counter_descriptor)
}
inline ::perfetto::protos::GpuCounterDescriptor* DataSourceDescriptor::release_gpu_counter_descriptor() {
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::GpuCounterDescriptor* temp = _impl_.gpu_counter_descriptor_;
  _impl_.gpu_counter_descriptor_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::GpuCounterDescriptor* DataSourceDescriptor::unsafe_arena_release_gpu_counter_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.DataSourceDescriptor.gpu_counter_descriptor)
  _impl_._has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::GpuCounterDescriptor* temp = _impl_.gpu_counter_descriptor_;
  _impl_.gpu_counter_descriptor_ = nullptr;
  return temp;
}
inline ::perfetto::protos::GpuCounterDescriptor* DataSourceDescriptor::_internal_mutable_gpu_counter_descriptor() {
  _impl_._has_bits_[0] |= 0x00000002u;
  if (_impl_.gpu_counter_descriptor_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::GpuCounterDescriptor>(GetArenaForAllocation());
    _impl_.gpu_counter_descriptor_ = p;
  }
  return _impl_.gpu_counter_descriptor_;
}
inline ::perfetto::protos::GpuCounterDescriptor* DataSourceDescriptor::mutable_gpu_counter_descriptor() {
  ::perfetto::protos::GpuCounterDescriptor* _msg = _internal_mutable_gpu_counter_descriptor();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.DataSourceDescriptor.gpu_counter_descriptor)
  return _msg;
}
inline void DataSourceDescriptor::set_allocated_gpu_counter_descriptor(::perfetto::protos::GpuCounterDescriptor* gpu_counter_descriptor) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.gpu_counter_descriptor_);
  }
  if (gpu_counter_descriptor) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(gpu_counter_descriptor));
    if (message_arena != submessage_arena) {
      gpu_counter_descriptor = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, gpu_counter_descriptor, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.gpu_counter_descriptor_ = gpu_counter_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.DataSourceDescriptor.gpu_counter_descriptor)
}

// optional .perfetto.protos.TrackEventDescriptor track_event_descriptor = 6 [lazy = true];
inline bool DataSourceDescriptor::_internal_has_track_event_descriptor() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.track_event_descriptor_ != nullptr);
  return value;
}
inline bool DataSourceDescriptor::has_track_event_descriptor() const {
  return _internal_has_track_event_descriptor();
}
inline const ::perfetto::protos::TrackEventDescriptor& DataSourceDescriptor::_internal_track_event_descriptor() const {
  const ::perfetto::protos::TrackEventDescriptor* p = _impl_.track_event_descriptor_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::TrackEventDescriptor&>(
      ::perfetto::protos::_TrackEventDescriptor_default_instance_);
}
inline const ::perfetto::protos::TrackEventDescriptor& DataSourceDescriptor::track_event_descriptor() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.track_event_descriptor)
  return _internal_track_event_descriptor();
}
inline void DataSourceDescriptor::unsafe_arena_set_allocated_track_event_descriptor(
    ::perfetto::protos::TrackEventDescriptor* track_event_descriptor) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.track_event_descriptor_);
  }
  _impl_.track_event_descriptor_ = track_event_descriptor;
  if (track_event_descriptor) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.DataSourceDescriptor.track_event_descriptor)
}
inline ::perfetto::protos::TrackEventDescriptor* DataSourceDescriptor::release_track_event_descriptor() {
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::perfetto::protos::TrackEventDescriptor* temp = _impl_.track_event_descriptor_;
  _impl_.track_event_descriptor_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::TrackEventDescriptor* DataSourceDescriptor::unsafe_arena_release_track_event_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.DataSourceDescriptor.track_event_descriptor)
  _impl_._has_bits_[0] &= ~0x00000004u;
  ::perfetto::protos::TrackEventDescriptor* temp = _impl_.track_event_descriptor_;
  _impl_.track_event_descriptor_ = nullptr;
  return temp;
}
inline ::perfetto::protos::TrackEventDescriptor* DataSourceDescriptor::_internal_mutable_track_event_descriptor() {
  _impl_._has_bits_[0] |= 0x00000004u;
  if (_impl_.track_event_descriptor_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TrackEventDescriptor>(GetArenaForAllocation());
    _impl_.track_event_descriptor_ = p;
  }
  return _impl_.track_event_descriptor_;
}
inline ::perfetto::protos::TrackEventDescriptor* DataSourceDescriptor::mutable_track_event_descriptor() {
  ::perfetto::protos::TrackEventDescriptor* _msg = _internal_mutable_track_event_descriptor();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.DataSourceDescriptor.track_event_descriptor)
  return _msg;
}
inline void DataSourceDescriptor::set_allocated_track_event_descriptor(::perfetto::protos::TrackEventDescriptor* track_event_descriptor) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.track_event_descriptor_);
  }
  if (track_event_descriptor) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(track_event_descriptor));
    if (message_arena != submessage_arena) {
      track_event_descriptor = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, track_event_descriptor, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.track_event_descriptor_ = track_event_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.DataSourceDescriptor.track_event_descriptor)
}

// optional .perfetto.protos.FtraceDescriptor ftrace_descriptor = 8 [lazy = true];
inline bool DataSourceDescriptor::_internal_has_ftrace_descriptor() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || _impl_.ftrace_descriptor_ != nullptr);
  return value;
}
inline bool DataSourceDescriptor::has_ftrace_descriptor() const {
  return _internal_has_ftrace_descriptor();
}
inline const ::perfetto::protos::FtraceDescriptor& DataSourceDescriptor::_internal_ftrace_descriptor() const {
  const ::perfetto::protos::FtraceDescriptor* p = _impl_.ftrace_descriptor_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::FtraceDescriptor&>(
      ::perfetto::protos::_FtraceDescriptor_default_instance_);
}
inline const ::perfetto::protos::FtraceDescriptor& DataSourceDescriptor::ftrace_descriptor() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.DataSourceDescriptor.ftrace_descriptor)
  return _internal_ftrace_descriptor();
}
inline void DataSourceDescriptor::unsafe_arena_set_allocated_ftrace_descriptor(
    ::perfetto::protos::FtraceDescriptor* ftrace_descriptor) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ftrace_descriptor_);
  }
  _impl_.ftrace_descriptor_ = ftrace_descriptor;
  if (ftrace_descriptor) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.DataSourceDescriptor.ftrace_descriptor)
}
inline ::perfetto::protos::FtraceDescriptor* DataSourceDescriptor::release_ftrace_descriptor() {
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::perfetto::protos::FtraceDescriptor* temp = _impl_.ftrace_descriptor_;
  _impl_.ftrace_descriptor_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::perfetto::protos::FtraceDescriptor* DataSourceDescriptor::unsafe_arena_release_ftrace_descriptor() {
  // @@protoc_insertion_point(field_release:perfetto.protos.DataSourceDescriptor.ftrace_descriptor)
  _impl_._has_bits_[0] &= ~0x00000008u;
  ::perfetto::protos::FtraceDescriptor* temp = _impl_.ftrace_descriptor_;
  _impl_.ftrace_descriptor_ = nullptr;
  return temp;
}
inline ::perfetto::protos::FtraceDescriptor* DataSourceDescriptor::_internal_mutable_ftrace_descriptor() {
  _impl_._has_bits_[0] |= 0x00000008u;
  if (_impl_.ftrace_descriptor_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::FtraceDescriptor>(GetArenaForAllocation());
    _impl_.ftrace_descriptor_ = p;
  }
  return _impl_.ftrace_descriptor_;
}
inline ::perfetto::protos::FtraceDescriptor* DataSourceDescriptor::mutable_ftrace_descriptor() {
  ::perfetto::protos::FtraceDescriptor* _msg = _internal_mutable_ftrace_descriptor();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.DataSourceDescriptor.ftrace_descriptor)
  return _msg;
}
inline void DataSourceDescriptor::set_allocated_ftrace_descriptor(::perfetto::protos::FtraceDescriptor* ftrace_descriptor) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.ftrace_descriptor_);
  }
  if (ftrace_descriptor) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(ftrace_descriptor));
    if (message_arena != submessage_arena) {
      ftrace_descriptor = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ftrace_descriptor, submessage_arena);
    }
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  _impl_.ftrace_descriptor_ = ftrace_descriptor;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.DataSourceDescriptor.ftrace_descriptor)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fdata_5fsource_5fdescriptor_2eproto
