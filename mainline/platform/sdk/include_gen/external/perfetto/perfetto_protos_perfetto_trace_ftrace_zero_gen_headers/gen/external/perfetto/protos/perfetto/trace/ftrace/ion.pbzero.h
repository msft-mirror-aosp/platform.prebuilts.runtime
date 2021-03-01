// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_ION_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_ION_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class IonStatFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  IonStatFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit IonStatFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit IonStatFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_buffer_id() const { return at<1>().valid(); }
  uint32_t buffer_id() const { return at<1>().as_uint32(); }
  bool has_len() const { return at<2>().valid(); }
  int64_t len() const { return at<2>().as_int64(); }
  bool has_total_allocated() const { return at<3>().valid(); }
  uint64_t total_allocated() const { return at<3>().as_uint64(); }
};

class IonStatFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = IonStatFtraceEvent_Decoder;
  enum : int32_t {
    kBufferIdFieldNumber = 1,
    kLenFieldNumber = 2,
    kTotalAllocatedFieldNumber = 3,
  };
  void set_buffer_id(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_len(int64_t value) {
    AppendVarInt(2, value);
  }
  void set_total_allocated(uint64_t value) {
    AppendVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
