// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_GPU_VULKAN_MEMORY_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_GPU_VULKAN_MEMORY_CONFIG_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class VulkanMemoryConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  VulkanMemoryConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit VulkanMemoryConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit VulkanMemoryConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_track_driver_memory_usage() const { return at<1>().valid(); }
  bool track_driver_memory_usage() const { return at<1>().as_bool(); }
  bool has_track_device_memory_usage() const { return at<2>().valid(); }
  bool track_device_memory_usage() const { return at<2>().as_bool(); }
};

class VulkanMemoryConfig : public ::protozero::Message {
 public:
  using Decoder = VulkanMemoryConfig_Decoder;
  enum : int32_t {
    kTrackDriverMemoryUsageFieldNumber = 1,
    kTrackDeviceMemoryUsageFieldNumber = 2,
  };
  void set_track_driver_memory_usage(bool value) {
    AppendTinyVarInt(1, value);
  }
  void set_track_device_memory_usage(bool value) {
    AppendTinyVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.