// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_INTERCEPTORS_CONSOLE_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_INTERCEPTORS_CONSOLE_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

enum ConsoleConfig_Output : int32_t;

enum ConsoleConfig_Output : int32_t {
  ConsoleConfig_Output_OUTPUT_UNSPECIFIED = 0,
  ConsoleConfig_Output_OUTPUT_STDOUT = 1,
  ConsoleConfig_Output_OUTPUT_STDERR = 2,
};

const ConsoleConfig_Output ConsoleConfig_Output_MIN = ConsoleConfig_Output_OUTPUT_UNSPECIFIED;
const ConsoleConfig_Output ConsoleConfig_Output_MAX = ConsoleConfig_Output_OUTPUT_STDERR;

class ConsoleConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ConsoleConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ConsoleConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ConsoleConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_output() const { return at<1>().valid(); }
  int32_t output() const { return at<1>().as_int32(); }
  bool has_enable_colors() const { return at<2>().valid(); }
  bool enable_colors() const { return at<2>().as_bool(); }
};

class ConsoleConfig : public ::protozero::Message {
 public:
  using Decoder = ConsoleConfig_Decoder;
  enum : int32_t {
    kOutputFieldNumber = 1,
    kEnableColorsFieldNumber = 2,
  };
  using Output = ::perfetto::protos::pbzero::ConsoleConfig_Output;
  static const Output OUTPUT_UNSPECIFIED = ConsoleConfig_Output_OUTPUT_UNSPECIFIED;
  static const Output OUTPUT_STDOUT = ConsoleConfig_Output_OUTPUT_STDOUT;
  static const Output OUTPUT_STDERR = ConsoleConfig_Output_OUTPUT_STDERR;
  void set_output(::perfetto::protos::pbzero::ConsoleConfig_Output value) {
    AppendTinyVarInt(1, value);
  }
  void set_enable_colors(bool value) {
    AppendTinyVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
