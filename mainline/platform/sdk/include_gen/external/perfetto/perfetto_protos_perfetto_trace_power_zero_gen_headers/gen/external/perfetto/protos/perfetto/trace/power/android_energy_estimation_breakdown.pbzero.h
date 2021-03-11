// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_ANDROID_ENERGY_ESTIMATION_BREAKDOWN_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_POWER_ANDROID_ENERGY_ESTIMATION_BREAKDOWN_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class AndroidEnergyConsumerDescriptor;
class AndroidEnergyEstimationBreakdown_EnergyUidBreakdown;

class AndroidEnergyEstimationBreakdown_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/4, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  AndroidEnergyEstimationBreakdown_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidEnergyEstimationBreakdown_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidEnergyEstimationBreakdown_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_energy_consumer_descriptor() const { return at<1>().valid(); }
  ::protozero::ConstBytes energy_consumer_descriptor() const { return at<1>().as_bytes(); }
  bool has_energy_consumer_id() const { return at<2>().valid(); }
  int32_t energy_consumer_id() const { return at<2>().as_int32(); }
  bool has_energy_uws() const { return at<3>().valid(); }
  int64_t energy_uws() const { return at<3>().as_int64(); }
  bool has_per_uid_breakdown() const { return at<4>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> per_uid_breakdown() const { return GetRepeated<::protozero::ConstBytes>(4); }
};

class AndroidEnergyEstimationBreakdown : public ::protozero::Message {
 public:
  using Decoder = AndroidEnergyEstimationBreakdown_Decoder;
  enum : int32_t {
    kEnergyConsumerDescriptorFieldNumber = 1,
    kEnergyConsumerIdFieldNumber = 2,
    kEnergyUwsFieldNumber = 3,
    kPerUidBreakdownFieldNumber = 4,
  };
  using EnergyUidBreakdown = ::perfetto::protos::pbzero::AndroidEnergyEstimationBreakdown_EnergyUidBreakdown;
  template <typename T = AndroidEnergyConsumerDescriptor> T* set_energy_consumer_descriptor() {
    return BeginNestedMessage<T>(1);
  }

  void set_energy_consumer_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_energy_uws(int64_t value) {
    AppendVarInt(3, value);
  }
  template <typename T = AndroidEnergyEstimationBreakdown_EnergyUidBreakdown> T* add_per_uid_breakdown() {
    return BeginNestedMessage<T>(4);
  }

};

class AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_uid() const { return at<1>().valid(); }
  int32_t uid() const { return at<1>().as_int32(); }
  bool has_energy_uws() const { return at<2>().valid(); }
  int64_t energy_uws() const { return at<2>().as_int64(); }
};

class AndroidEnergyEstimationBreakdown_EnergyUidBreakdown : public ::protozero::Message {
 public:
  using Decoder = AndroidEnergyEstimationBreakdown_EnergyUidBreakdown_Decoder;
  enum : int32_t {
    kUidFieldNumber = 1,
    kEnergyUwsFieldNumber = 2,
  };
  void set_uid(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_energy_uws(int64_t value) {
    AppendVarInt(2, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
