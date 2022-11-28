// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/cros_ec.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class CrosEcSensorhubDataFtraceEvent;
struct CrosEcSensorhubDataFtraceEventDefaultTypeInternal;
extern CrosEcSensorhubDataFtraceEventDefaultTypeInternal _CrosEcSensorhubDataFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::CrosEcSensorhubDataFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::CrosEcSensorhubDataFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class CrosEcSensorhubDataFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.CrosEcSensorhubDataFtraceEvent) */ {
 public:
  inline CrosEcSensorhubDataFtraceEvent() : CrosEcSensorhubDataFtraceEvent(nullptr) {}
  ~CrosEcSensorhubDataFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR CrosEcSensorhubDataFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CrosEcSensorhubDataFtraceEvent(const CrosEcSensorhubDataFtraceEvent& from);
  CrosEcSensorhubDataFtraceEvent(CrosEcSensorhubDataFtraceEvent&& from) noexcept
    : CrosEcSensorhubDataFtraceEvent() {
    *this = ::std::move(from);
  }

  inline CrosEcSensorhubDataFtraceEvent& operator=(const CrosEcSensorhubDataFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline CrosEcSensorhubDataFtraceEvent& operator=(CrosEcSensorhubDataFtraceEvent&& from) noexcept {
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

  static const CrosEcSensorhubDataFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const CrosEcSensorhubDataFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const CrosEcSensorhubDataFtraceEvent*>(
               &_CrosEcSensorhubDataFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CrosEcSensorhubDataFtraceEvent& a, CrosEcSensorhubDataFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(CrosEcSensorhubDataFtraceEvent* other) {
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
  void UnsafeArenaSwap(CrosEcSensorhubDataFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CrosEcSensorhubDataFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CrosEcSensorhubDataFtraceEvent>(arena);
  }
  CrosEcSensorhubDataFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CrosEcSensorhubDataFtraceEvent& from);
  void MergeFrom(const CrosEcSensorhubDataFtraceEvent& from);
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
  void InternalSwap(CrosEcSensorhubDataFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.CrosEcSensorhubDataFtraceEvent";
  }
  protected:
  explicit CrosEcSensorhubDataFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCurrentTimeFieldNumber = 1,
    kCurrentTimestampFieldNumber = 2,
    kDeltaFieldNumber = 3,
    kEcFifoTimestampFieldNumber = 4,
    kEcSensorNumFieldNumber = 5,
    kFifoTimestampFieldNumber = 6,
  };
  // optional int64 current_time = 1;
  bool has_current_time() const;
  private:
  bool _internal_has_current_time() const;
  public:
  void clear_current_time();
  ::int64_t current_time() const;
  void set_current_time(::int64_t value);
  private:
  ::int64_t _internal_current_time() const;
  void _internal_set_current_time(::int64_t value);
  public:

  // optional int64 current_timestamp = 2;
  bool has_current_timestamp() const;
  private:
  bool _internal_has_current_timestamp() const;
  public:
  void clear_current_timestamp();
  ::int64_t current_timestamp() const;
  void set_current_timestamp(::int64_t value);
  private:
  ::int64_t _internal_current_timestamp() const;
  void _internal_set_current_timestamp(::int64_t value);
  public:

  // optional int64 delta = 3;
  bool has_delta() const;
  private:
  bool _internal_has_delta() const;
  public:
  void clear_delta();
  ::int64_t delta() const;
  void set_delta(::int64_t value);
  private:
  ::int64_t _internal_delta() const;
  void _internal_set_delta(::int64_t value);
  public:

  // optional uint32 ec_fifo_timestamp = 4;
  bool has_ec_fifo_timestamp() const;
  private:
  bool _internal_has_ec_fifo_timestamp() const;
  public:
  void clear_ec_fifo_timestamp();
  ::uint32_t ec_fifo_timestamp() const;
  void set_ec_fifo_timestamp(::uint32_t value);
  private:
  ::uint32_t _internal_ec_fifo_timestamp() const;
  void _internal_set_ec_fifo_timestamp(::uint32_t value);
  public:

  // optional uint32 ec_sensor_num = 5;
  bool has_ec_sensor_num() const;
  private:
  bool _internal_has_ec_sensor_num() const;
  public:
  void clear_ec_sensor_num();
  ::uint32_t ec_sensor_num() const;
  void set_ec_sensor_num(::uint32_t value);
  private:
  ::uint32_t _internal_ec_sensor_num() const;
  void _internal_set_ec_sensor_num(::uint32_t value);
  public:

  // optional int64 fifo_timestamp = 6;
  bool has_fifo_timestamp() const;
  private:
  bool _internal_has_fifo_timestamp() const;
  public:
  void clear_fifo_timestamp();
  ::int64_t fifo_timestamp() const;
  void set_fifo_timestamp(::int64_t value);
  private:
  ::int64_t _internal_fifo_timestamp() const;
  void _internal_set_fifo_timestamp(::int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.CrosEcSensorhubDataFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::int64_t current_time_;
    ::int64_t current_timestamp_;
    ::int64_t delta_;
    ::uint32_t ec_fifo_timestamp_;
    ::uint32_t ec_sensor_num_;
    ::int64_t fifo_timestamp_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CrosEcSensorhubDataFtraceEvent

// optional int64 current_time = 1;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_current_time() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_current_time() const {
  return _internal_has_current_time();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_current_time() {
  _impl_.current_time_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::_internal_current_time() const {
  return _impl_.current_time_;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::current_time() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.current_time)
  return _internal_current_time();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_current_time(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.current_time_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_current_time(::int64_t value) {
  _internal_set_current_time(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.current_time)
}

// optional int64 current_timestamp = 2;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_current_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_current_timestamp() const {
  return _internal_has_current_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_current_timestamp() {
  _impl_.current_timestamp_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::_internal_current_timestamp() const {
  return _impl_.current_timestamp_;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::current_timestamp() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.current_timestamp)
  return _internal_current_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_current_timestamp(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.current_timestamp_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_current_timestamp(::int64_t value) {
  _internal_set_current_timestamp(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.current_timestamp)
}

// optional int64 delta = 3;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_delta() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_delta() const {
  return _internal_has_delta();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_delta() {
  _impl_.delta_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::_internal_delta() const {
  return _impl_.delta_;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::delta() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.delta)
  return _internal_delta();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_delta(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.delta_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_delta(::int64_t value) {
  _internal_set_delta(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.delta)
}

// optional uint32 ec_fifo_timestamp = 4;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_ec_fifo_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_ec_fifo_timestamp() const {
  return _internal_has_ec_fifo_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_ec_fifo_timestamp() {
  _impl_.ec_fifo_timestamp_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t CrosEcSensorhubDataFtraceEvent::_internal_ec_fifo_timestamp() const {
  return _impl_.ec_fifo_timestamp_;
}
inline ::uint32_t CrosEcSensorhubDataFtraceEvent::ec_fifo_timestamp() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.ec_fifo_timestamp)
  return _internal_ec_fifo_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_ec_fifo_timestamp(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.ec_fifo_timestamp_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_ec_fifo_timestamp(::uint32_t value) {
  _internal_set_ec_fifo_timestamp(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.ec_fifo_timestamp)
}

// optional uint32 ec_sensor_num = 5;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_ec_sensor_num() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_ec_sensor_num() const {
  return _internal_has_ec_sensor_num();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_ec_sensor_num() {
  _impl_.ec_sensor_num_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint32_t CrosEcSensorhubDataFtraceEvent::_internal_ec_sensor_num() const {
  return _impl_.ec_sensor_num_;
}
inline ::uint32_t CrosEcSensorhubDataFtraceEvent::ec_sensor_num() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.ec_sensor_num)
  return _internal_ec_sensor_num();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_ec_sensor_num(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.ec_sensor_num_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_ec_sensor_num(::uint32_t value) {
  _internal_set_ec_sensor_num(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.ec_sensor_num)
}

// optional int64 fifo_timestamp = 6;
inline bool CrosEcSensorhubDataFtraceEvent::_internal_has_fifo_timestamp() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CrosEcSensorhubDataFtraceEvent::has_fifo_timestamp() const {
  return _internal_has_fifo_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::clear_fifo_timestamp() {
  _impl_.fifo_timestamp_ = ::int64_t{0};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::_internal_fifo_timestamp() const {
  return _impl_.fifo_timestamp_;
}
inline ::int64_t CrosEcSensorhubDataFtraceEvent::fifo_timestamp() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CrosEcSensorhubDataFtraceEvent.fifo_timestamp)
  return _internal_fifo_timestamp();
}
inline void CrosEcSensorhubDataFtraceEvent::_internal_set_fifo_timestamp(::int64_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.fifo_timestamp_ = value;
}
inline void CrosEcSensorhubDataFtraceEvent::set_fifo_timestamp(::int64_t value) {
  _internal_set_fifo_timestamp(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CrosEcSensorhubDataFtraceEvent.fifo_timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcros_5fec_2eproto
