// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_PACKAGES_LIST_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_ANDROID_PACKAGES_LIST_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class PackagesList_PackageInfo;

class PackagesList_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  PackagesList_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PackagesList_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PackagesList_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_packages() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> packages() const { return GetRepeated<::protozero::ConstBytes>(1); }
  bool has_parse_error() const { return at<2>().valid(); }
  bool parse_error() const { return at<2>().as_bool(); }
  bool has_read_error() const { return at<3>().valid(); }
  bool read_error() const { return at<3>().as_bool(); }
};

class PackagesList : public ::protozero::Message {
 public:
  using Decoder = PackagesList_Decoder;
  enum : int32_t {
    kPackagesFieldNumber = 1,
    kParseErrorFieldNumber = 2,
    kReadErrorFieldNumber = 3,
  };
  using PackageInfo = ::perfetto::protos::pbzero::PackagesList_PackageInfo;
  template <typename T = PackagesList_PackageInfo> T* add_packages() {
    return BeginNestedMessage<T>(1);
  }

  void set_parse_error(bool value) {
    AppendTinyVarInt(2, value);
  }
  void set_read_error(bool value) {
    AppendTinyVarInt(3, value);
  }
};

class PackagesList_PackageInfo_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  PackagesList_PackageInfo_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit PackagesList_PackageInfo_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit PackagesList_PackageInfo_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_uid() const { return at<2>().valid(); }
  uint64_t uid() const { return at<2>().as_uint64(); }
  bool has_debuggable() const { return at<3>().valid(); }
  bool debuggable() const { return at<3>().as_bool(); }
  bool has_profileable_from_shell() const { return at<4>().valid(); }
  bool profileable_from_shell() const { return at<4>().as_bool(); }
  bool has_version_code() const { return at<5>().valid(); }
  int64_t version_code() const { return at<5>().as_int64(); }
};

class PackagesList_PackageInfo : public ::protozero::Message {
 public:
  using Decoder = PackagesList_PackageInfo_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kUidFieldNumber = 2,
    kDebuggableFieldNumber = 3,
    kProfileableFromShellFieldNumber = 4,
    kVersionCodeFieldNumber = 5,
  };
  void set_name(const std::string& value) {
    AppendBytes(1, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(1, data, size);
  }
  void set_uid(uint64_t value) {
    AppendVarInt(2, value);
  }
  void set_debuggable(bool value) {
    AppendTinyVarInt(3, value);
  }
  void set_profileable_from_shell(bool value) {
    AppendTinyVarInt(4, value);
  }
  void set_version_code(int64_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.