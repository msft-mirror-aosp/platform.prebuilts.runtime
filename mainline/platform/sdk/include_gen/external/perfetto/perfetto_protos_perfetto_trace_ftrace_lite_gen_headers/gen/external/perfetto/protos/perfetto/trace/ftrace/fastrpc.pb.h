// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/fastrpc.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class FastrpcDmaStatFtraceEvent;
class FastrpcDmaStatFtraceEventDefaultTypeInternal;
extern FastrpcDmaStatFtraceEventDefaultTypeInternal _FastrpcDmaStatFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::FastrpcDmaStatFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::FastrpcDmaStatFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class FastrpcDmaStatFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.FastrpcDmaStatFtraceEvent) */ {
 public:
  FastrpcDmaStatFtraceEvent();
  virtual ~FastrpcDmaStatFtraceEvent();

  FastrpcDmaStatFtraceEvent(const FastrpcDmaStatFtraceEvent& from);
  FastrpcDmaStatFtraceEvent(FastrpcDmaStatFtraceEvent&& from) noexcept
    : FastrpcDmaStatFtraceEvent() {
    *this = ::std::move(from);
  }

  inline FastrpcDmaStatFtraceEvent& operator=(const FastrpcDmaStatFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline FastrpcDmaStatFtraceEvent& operator=(FastrpcDmaStatFtraceEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const FastrpcDmaStatFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const FastrpcDmaStatFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const FastrpcDmaStatFtraceEvent*>(
               &_FastrpcDmaStatFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FastrpcDmaStatFtraceEvent& a, FastrpcDmaStatFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(FastrpcDmaStatFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FastrpcDmaStatFtraceEvent* New() const final {
    return CreateMaybeMessage<FastrpcDmaStatFtraceEvent>(nullptr);
  }

  FastrpcDmaStatFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FastrpcDmaStatFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const FastrpcDmaStatFtraceEvent& from);
  void MergeFrom(const FastrpcDmaStatFtraceEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FastrpcDmaStatFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.FastrpcDmaStatFtraceEvent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
    kCidFieldNumber = 1,
  };
  // optional int64 len = 2;
  bool has_len() const;
  void clear_len();
  ::PROTOBUF_NAMESPACE_ID::int64 len() const;
  void set_len(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional uint64 total_allocated = 3;
  bool has_total_allocated() const;
  void clear_total_allocated();
  ::PROTOBUF_NAMESPACE_ID::uint64 total_allocated() const;
  void set_total_allocated(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional int32 cid = 1;
  bool has_cid() const;
  void clear_cid();
  ::PROTOBUF_NAMESPACE_ID::int32 cid() const;
  void set_cid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.FastrpcDmaStatFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int64 len_;
  ::PROTOBUF_NAMESPACE_ID::uint64 total_allocated_;
  ::PROTOBUF_NAMESPACE_ID::int32 cid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FastrpcDmaStatFtraceEvent

// optional int32 cid = 1;
inline bool FastrpcDmaStatFtraceEvent::has_cid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void FastrpcDmaStatFtraceEvent::clear_cid() {
  cid_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 FastrpcDmaStatFtraceEvent::cid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FastrpcDmaStatFtraceEvent.cid)
  return cid_;
}
inline void FastrpcDmaStatFtraceEvent::set_cid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  cid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.FastrpcDmaStatFtraceEvent.cid)
}

// optional int64 len = 2;
inline bool FastrpcDmaStatFtraceEvent::has_len() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FastrpcDmaStatFtraceEvent::clear_len() {
  len_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 FastrpcDmaStatFtraceEvent::len() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FastrpcDmaStatFtraceEvent.len)
  return len_;
}
inline void FastrpcDmaStatFtraceEvent::set_len(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000001u;
  len_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.FastrpcDmaStatFtraceEvent.len)
}

// optional uint64 total_allocated = 3;
inline bool FastrpcDmaStatFtraceEvent::has_total_allocated() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FastrpcDmaStatFtraceEvent::clear_total_allocated() {
  total_allocated_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 FastrpcDmaStatFtraceEvent::total_allocated() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.FastrpcDmaStatFtraceEvent.total_allocated)
  return total_allocated_;
}
inline void FastrpcDmaStatFtraceEvent::set_total_allocated(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  total_allocated_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.FastrpcDmaStatFtraceEvent.total_allocated)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffastrpc_2eproto
