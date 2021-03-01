// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_INTERCEPTOR_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_INTERCEPTOR_DESCRIPTOR_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class InterceptorDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  InterceptorDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit InterceptorDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit InterceptorDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
};

class InterceptorDescriptor : public ::protozero::Message {
 public:
  using Decoder = InterceptorDescriptor_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
  };
  void set_name(const std::string& value) {
    AppendBytes(1, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(1, data, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
