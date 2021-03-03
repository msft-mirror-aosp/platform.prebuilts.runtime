// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class TracePacket;

class Trace_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  Trace_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit Trace_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit Trace_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_packet() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> packet() const { return GetRepeated<::protozero::ConstBytes>(1); }
};

class Trace : public ::protozero::Message {
 public:
  using Decoder = Trace_Decoder;
  enum : int32_t {
    kPacketFieldNumber = 1,
  };
  template <typename T = TracePacket> T* add_packet() {
    return BeginNestedMessage<T>(1);
  }

};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.