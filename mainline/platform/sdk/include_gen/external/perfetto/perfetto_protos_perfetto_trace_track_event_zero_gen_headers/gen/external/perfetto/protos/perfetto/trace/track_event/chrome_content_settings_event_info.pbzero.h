// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_CONTENT_SETTINGS_EVENT_INFO_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_CONTENT_SETTINGS_EVENT_INFO_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class ChromeContentSettingsEventInfo_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeContentSettingsEventInfo_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeContentSettingsEventInfo_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeContentSettingsEventInfo_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_number_of_exceptions() const { return at<1>().valid(); }
  uint32_t number_of_exceptions() const { return at<1>().as_uint32(); }
};

class ChromeContentSettingsEventInfo : public ::protozero::Message {
 public:
  using Decoder = ChromeContentSettingsEventInfo_Decoder;
  enum : int32_t {
    kNumberOfExceptionsFieldNumber = 1,
  };
  void set_number_of_exceptions(uint32_t value) {
    AppendVarInt(1, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.