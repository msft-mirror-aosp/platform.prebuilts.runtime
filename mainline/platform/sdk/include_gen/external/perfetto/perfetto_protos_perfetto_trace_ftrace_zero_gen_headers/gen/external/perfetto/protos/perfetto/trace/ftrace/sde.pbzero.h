// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_SDE_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_SDE_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class SdeTracingMarkWriteFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SdeTracingMarkWriteFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SdeTracingMarkWriteFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SdeTracingMarkWriteFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  int32_t pid() const { return at<1>().as_int32(); }
  bool has_trace_name() const { return at<2>().valid(); }
  ::protozero::ConstChars trace_name() const { return at<2>().as_string(); }
  bool has_trace_type() const { return at<3>().valid(); }
  uint32_t trace_type() const { return at<3>().as_uint32(); }
  bool has_value() const { return at<4>().valid(); }
  int32_t value() const { return at<4>().as_int32(); }
  bool has_trace_begin() const { return at<5>().valid(); }
  uint32_t trace_begin() const { return at<5>().as_uint32(); }
};

class SdeTracingMarkWriteFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SdeTracingMarkWriteFtraceEvent_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kTraceNameFieldNumber = 2,
    kTraceTypeFieldNumber = 3,
    kValueFieldNumber = 4,
    kTraceBeginFieldNumber = 5,
  };
  void set_pid(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_trace_name(const std::string& value) {
    AppendBytes(2, value.data(), value.size());
  }
  void set_trace_name(const char* data, size_t size) {
    AppendBytes(2, data, size);
  }
  void set_trace_type(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_value(int32_t value) {
    AppendVarInt(4, value);
  }
  void set_trace_begin(uint32_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
