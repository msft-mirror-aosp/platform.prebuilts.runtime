// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_GPU_MEM_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_GPU_MEM_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class GpuMemTotalFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  GpuMemTotalFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit GpuMemTotalFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit GpuMemTotalFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_gpu_id() const { return at<1>().valid(); }
  uint32_t gpu_id() const { return at<1>().as_uint32(); }
  bool has_pid() const { return at<2>().valid(); }
  uint32_t pid() const { return at<2>().as_uint32(); }
  bool has_size() const { return at<3>().valid(); }
  uint64_t size() const { return at<3>().as_uint64(); }
};

class GpuMemTotalFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = GpuMemTotalFtraceEvent_Decoder;
  enum : int32_t {
    kGpuIdFieldNumber = 1,
    kPidFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  void set_gpu_id(uint32_t value) {
    AppendVarInt(1, value);
  }
  void set_pid(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_size(uint64_t value) {
    AppendVarInt(3, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
