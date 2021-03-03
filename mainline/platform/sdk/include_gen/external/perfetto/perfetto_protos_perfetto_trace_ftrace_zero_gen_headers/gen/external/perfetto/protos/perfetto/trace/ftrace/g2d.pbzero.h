// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_G2D_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_G2D_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class G2dTracingMarkWriteFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  G2dTracingMarkWriteFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit G2dTracingMarkWriteFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit G2dTracingMarkWriteFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  int32_t pid() const { return at<1>().as_int32(); }
  bool has_name() const { return at<4>().valid(); }
  ::protozero::ConstChars name() const { return at<4>().as_string(); }
  bool has_type() const { return at<5>().valid(); }
  uint32_t type() const { return at<5>().as_uint32(); }
  bool has_value() const { return at<6>().valid(); }
  int32_t value() const { return at<6>().as_int32(); }
};

class G2dTracingMarkWriteFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = G2dTracingMarkWriteFtraceEvent_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kNameFieldNumber = 4,
    kTypeFieldNumber = 5,
    kValueFieldNumber = 6,
  };
  void set_pid(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_name(const std::string& value) {
    AppendBytes(4, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(4, data, size);
  }
  void set_type(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_value(int32_t value) {
    AppendVarInt(6, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.