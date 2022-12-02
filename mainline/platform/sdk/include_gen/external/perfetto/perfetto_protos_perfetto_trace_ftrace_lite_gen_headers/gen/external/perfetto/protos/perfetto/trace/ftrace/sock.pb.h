// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/sock.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class InetSockSetStateFtraceEvent;
struct InetSockSetStateFtraceEventDefaultTypeInternal;
extern InetSockSetStateFtraceEventDefaultTypeInternal _InetSockSetStateFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::InetSockSetStateFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::InetSockSetStateFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class InetSockSetStateFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InetSockSetStateFtraceEvent) */ {
 public:
  inline InetSockSetStateFtraceEvent() : InetSockSetStateFtraceEvent(nullptr) {}
  ~InetSockSetStateFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR InetSockSetStateFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  InetSockSetStateFtraceEvent(const InetSockSetStateFtraceEvent& from);
  InetSockSetStateFtraceEvent(InetSockSetStateFtraceEvent&& from) noexcept
    : InetSockSetStateFtraceEvent() {
    *this = ::std::move(from);
  }

  inline InetSockSetStateFtraceEvent& operator=(const InetSockSetStateFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline InetSockSetStateFtraceEvent& operator=(InetSockSetStateFtraceEvent&& from) noexcept {
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

  static const InetSockSetStateFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const InetSockSetStateFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const InetSockSetStateFtraceEvent*>(
               &_InetSockSetStateFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InetSockSetStateFtraceEvent& a, InetSockSetStateFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(InetSockSetStateFtraceEvent* other) {
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
  void UnsafeArenaSwap(InetSockSetStateFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  InetSockSetStateFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InetSockSetStateFtraceEvent>(arena);
  }
  InetSockSetStateFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const InetSockSetStateFtraceEvent& from);
  void MergeFrom(const InetSockSetStateFtraceEvent& from);
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
  void InternalSwap(InetSockSetStateFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.InetSockSetStateFtraceEvent";
  }
  protected:
  explicit InetSockSetStateFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDaddrFieldNumber = 1,
    kDportFieldNumber = 2,
    kFamilyFieldNumber = 3,
    kNewstateFieldNumber = 4,
    kOldstateFieldNumber = 5,
    kProtocolFieldNumber = 6,
    kSkaddrFieldNumber = 8,
    kSaddrFieldNumber = 7,
    kSportFieldNumber = 9,
  };
  // optional uint32 daddr = 1;
  bool has_daddr() const;
  private:
  bool _internal_has_daddr() const;
  public:
  void clear_daddr();
  ::uint32_t daddr() const;
  void set_daddr(::uint32_t value);
  private:
  ::uint32_t _internal_daddr() const;
  void _internal_set_daddr(::uint32_t value);
  public:

  // optional uint32 dport = 2;
  bool has_dport() const;
  private:
  bool _internal_has_dport() const;
  public:
  void clear_dport();
  ::uint32_t dport() const;
  void set_dport(::uint32_t value);
  private:
  ::uint32_t _internal_dport() const;
  void _internal_set_dport(::uint32_t value);
  public:

  // optional uint32 family = 3;
  bool has_family() const;
  private:
  bool _internal_has_family() const;
  public:
  void clear_family();
  ::uint32_t family() const;
  void set_family(::uint32_t value);
  private:
  ::uint32_t _internal_family() const;
  void _internal_set_family(::uint32_t value);
  public:

  // optional int32 newstate = 4;
  bool has_newstate() const;
  private:
  bool _internal_has_newstate() const;
  public:
  void clear_newstate();
  ::int32_t newstate() const;
  void set_newstate(::int32_t value);
  private:
  ::int32_t _internal_newstate() const;
  void _internal_set_newstate(::int32_t value);
  public:

  // optional int32 oldstate = 5;
  bool has_oldstate() const;
  private:
  bool _internal_has_oldstate() const;
  public:
  void clear_oldstate();
  ::int32_t oldstate() const;
  void set_oldstate(::int32_t value);
  private:
  ::int32_t _internal_oldstate() const;
  void _internal_set_oldstate(::int32_t value);
  public:

  // optional uint32 protocol = 6;
  bool has_protocol() const;
  private:
  bool _internal_has_protocol() const;
  public:
  void clear_protocol();
  ::uint32_t protocol() const;
  void set_protocol(::uint32_t value);
  private:
  ::uint32_t _internal_protocol() const;
  void _internal_set_protocol(::uint32_t value);
  public:

  // optional uint64 skaddr = 8;
  bool has_skaddr() const;
  private:
  bool _internal_has_skaddr() const;
  public:
  void clear_skaddr();
  ::uint64_t skaddr() const;
  void set_skaddr(::uint64_t value);
  private:
  ::uint64_t _internal_skaddr() const;
  void _internal_set_skaddr(::uint64_t value);
  public:

  // optional uint32 saddr = 7;
  bool has_saddr() const;
  private:
  bool _internal_has_saddr() const;
  public:
  void clear_saddr();
  ::uint32_t saddr() const;
  void set_saddr(::uint32_t value);
  private:
  ::uint32_t _internal_saddr() const;
  void _internal_set_saddr(::uint32_t value);
  public:

  // optional uint32 sport = 9;
  bool has_sport() const;
  private:
  bool _internal_has_sport() const;
  public:
  void clear_sport();
  ::uint32_t sport() const;
  void set_sport(::uint32_t value);
  private:
  ::uint32_t _internal_sport() const;
  void _internal_set_sport(::uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.InetSockSetStateFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint32_t daddr_;
    ::uint32_t dport_;
    ::uint32_t family_;
    ::int32_t newstate_;
    ::int32_t oldstate_;
    ::uint32_t protocol_;
    ::uint64_t skaddr_;
    ::uint32_t saddr_;
    ::uint32_t sport_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InetSockSetStateFtraceEvent

// optional uint32 daddr = 1;
inline bool InetSockSetStateFtraceEvent::_internal_has_daddr() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_daddr() const {
  return _internal_has_daddr();
}
inline void InetSockSetStateFtraceEvent::clear_daddr() {
  _impl_.daddr_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_daddr() const {
  return _impl_.daddr_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::daddr() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.daddr)
  return _internal_daddr();
}
inline void InetSockSetStateFtraceEvent::_internal_set_daddr(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.daddr_ = value;
}
inline void InetSockSetStateFtraceEvent::set_daddr(::uint32_t value) {
  _internal_set_daddr(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.daddr)
}

// optional uint32 dport = 2;
inline bool InetSockSetStateFtraceEvent::_internal_has_dport() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_dport() const {
  return _internal_has_dport();
}
inline void InetSockSetStateFtraceEvent::clear_dport() {
  _impl_.dport_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_dport() const {
  return _impl_.dport_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::dport() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.dport)
  return _internal_dport();
}
inline void InetSockSetStateFtraceEvent::_internal_set_dport(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.dport_ = value;
}
inline void InetSockSetStateFtraceEvent::set_dport(::uint32_t value) {
  _internal_set_dport(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.dport)
}

// optional uint32 family = 3;
inline bool InetSockSetStateFtraceEvent::_internal_has_family() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_family() const {
  return _internal_has_family();
}
inline void InetSockSetStateFtraceEvent::clear_family() {
  _impl_.family_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_family() const {
  return _impl_.family_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::family() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.family)
  return _internal_family();
}
inline void InetSockSetStateFtraceEvent::_internal_set_family(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.family_ = value;
}
inline void InetSockSetStateFtraceEvent::set_family(::uint32_t value) {
  _internal_set_family(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.family)
}

// optional int32 newstate = 4;
inline bool InetSockSetStateFtraceEvent::_internal_has_newstate() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_newstate() const {
  return _internal_has_newstate();
}
inline void InetSockSetStateFtraceEvent::clear_newstate() {
  _impl_.newstate_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::int32_t InetSockSetStateFtraceEvent::_internal_newstate() const {
  return _impl_.newstate_;
}
inline ::int32_t InetSockSetStateFtraceEvent::newstate() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.newstate)
  return _internal_newstate();
}
inline void InetSockSetStateFtraceEvent::_internal_set_newstate(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.newstate_ = value;
}
inline void InetSockSetStateFtraceEvent::set_newstate(::int32_t value) {
  _internal_set_newstate(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.newstate)
}

// optional int32 oldstate = 5;
inline bool InetSockSetStateFtraceEvent::_internal_has_oldstate() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_oldstate() const {
  return _internal_has_oldstate();
}
inline void InetSockSetStateFtraceEvent::clear_oldstate() {
  _impl_.oldstate_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int32_t InetSockSetStateFtraceEvent::_internal_oldstate() const {
  return _impl_.oldstate_;
}
inline ::int32_t InetSockSetStateFtraceEvent::oldstate() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.oldstate)
  return _internal_oldstate();
}
inline void InetSockSetStateFtraceEvent::_internal_set_oldstate(::int32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.oldstate_ = value;
}
inline void InetSockSetStateFtraceEvent::set_oldstate(::int32_t value) {
  _internal_set_oldstate(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.oldstate)
}

// optional uint32 protocol = 6;
inline bool InetSockSetStateFtraceEvent::_internal_has_protocol() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_protocol() const {
  return _internal_has_protocol();
}
inline void InetSockSetStateFtraceEvent::clear_protocol() {
  _impl_.protocol_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_protocol() const {
  return _impl_.protocol_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::protocol() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.protocol)
  return _internal_protocol();
}
inline void InetSockSetStateFtraceEvent::_internal_set_protocol(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.protocol_ = value;
}
inline void InetSockSetStateFtraceEvent::set_protocol(::uint32_t value) {
  _internal_set_protocol(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.protocol)
}

// optional uint32 saddr = 7;
inline bool InetSockSetStateFtraceEvent::_internal_has_saddr() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_saddr() const {
  return _internal_has_saddr();
}
inline void InetSockSetStateFtraceEvent::clear_saddr() {
  _impl_.saddr_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_saddr() const {
  return _impl_.saddr_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::saddr() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.saddr)
  return _internal_saddr();
}
inline void InetSockSetStateFtraceEvent::_internal_set_saddr(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.saddr_ = value;
}
inline void InetSockSetStateFtraceEvent::set_saddr(::uint32_t value) {
  _internal_set_saddr(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.saddr)
}

// optional uint64 skaddr = 8;
inline bool InetSockSetStateFtraceEvent::_internal_has_skaddr() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_skaddr() const {
  return _internal_has_skaddr();
}
inline void InetSockSetStateFtraceEvent::clear_skaddr() {
  _impl_.skaddr_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::uint64_t InetSockSetStateFtraceEvent::_internal_skaddr() const {
  return _impl_.skaddr_;
}
inline ::uint64_t InetSockSetStateFtraceEvent::skaddr() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.skaddr)
  return _internal_skaddr();
}
inline void InetSockSetStateFtraceEvent::_internal_set_skaddr(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.skaddr_ = value;
}
inline void InetSockSetStateFtraceEvent::set_skaddr(::uint64_t value) {
  _internal_set_skaddr(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.skaddr)
}

// optional uint32 sport = 9;
inline bool InetSockSetStateFtraceEvent::_internal_has_sport() const {
  bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool InetSockSetStateFtraceEvent::has_sport() const {
  return _internal_has_sport();
}
inline void InetSockSetStateFtraceEvent::clear_sport() {
  _impl_.sport_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000100u;
}
inline ::uint32_t InetSockSetStateFtraceEvent::_internal_sport() const {
  return _impl_.sport_;
}
inline ::uint32_t InetSockSetStateFtraceEvent::sport() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InetSockSetStateFtraceEvent.sport)
  return _internal_sport();
}
inline void InetSockSetStateFtraceEvent::_internal_set_sport(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000100u;
  _impl_.sport_ = value;
}
inline void InetSockSetStateFtraceEvent::set_sport(::uint32_t value) {
  _internal_set_sport(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.InetSockSetStateFtraceEvent.sport)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fsock_2eproto
