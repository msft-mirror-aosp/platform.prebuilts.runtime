// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_I2C_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_I2C_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class SmbusReplyFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SmbusReplyFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmbusReplyFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmbusReplyFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_addr() const { return at<2>().valid(); }
  uint32_t addr() const { return at<2>().as_uint32(); }
  bool has_flags() const { return at<3>().valid(); }
  uint32_t flags() const { return at<3>().as_uint32(); }
  bool has_command() const { return at<4>().valid(); }
  uint32_t command() const { return at<4>().as_uint32(); }
  bool has_len() const { return at<5>().valid(); }
  uint32_t len() const { return at<5>().as_uint32(); }
  bool has_protocol() const { return at<6>().valid(); }
  uint32_t protocol() const { return at<6>().as_uint32(); }
};

class SmbusReplyFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SmbusReplyFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kCommandFieldNumber = 4,
    kLenFieldNumber = 5,
    kProtocolFieldNumber = 6,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class SmbusResultFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SmbusResultFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmbusResultFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmbusResultFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_addr() const { return at<2>().valid(); }
  uint32_t addr() const { return at<2>().as_uint32(); }
  bool has_flags() const { return at<3>().valid(); }
  uint32_t flags() const { return at<3>().as_uint32(); }
  bool has_read_write() const { return at<4>().valid(); }
  uint32_t read_write() const { return at<4>().as_uint32(); }
  bool has_command() const { return at<5>().valid(); }
  uint32_t command() const { return at<5>().as_uint32(); }
  bool has_res() const { return at<6>().valid(); }
  int32_t res() const { return at<6>().as_int32(); }
  bool has_protocol() const { return at<7>().valid(); }
  uint32_t protocol() const { return at<7>().as_uint32(); }
};

class SmbusResultFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SmbusResultFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kReadWriteFieldNumber = 4,
    kCommandFieldNumber = 5,
    kResFieldNumber = 6,
    kProtocolFieldNumber = 7,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_read_write(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_res(int32_t value) {
    AppendVarInt(6, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(7, value);
  }
};

class SmbusWriteFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SmbusWriteFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmbusWriteFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmbusWriteFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_addr() const { return at<2>().valid(); }
  uint32_t addr() const { return at<2>().as_uint32(); }
  bool has_flags() const { return at<3>().valid(); }
  uint32_t flags() const { return at<3>().as_uint32(); }
  bool has_command() const { return at<4>().valid(); }
  uint32_t command() const { return at<4>().as_uint32(); }
  bool has_len() const { return at<5>().valid(); }
  uint32_t len() const { return at<5>().as_uint32(); }
  bool has_protocol() const { return at<6>().valid(); }
  uint32_t protocol() const { return at<6>().as_uint32(); }
};

class SmbusWriteFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SmbusWriteFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kAddrFieldNumber = 2,
    kFlagsFieldNumber = 3,
    kCommandFieldNumber = 4,
    kLenFieldNumber = 5,
    kProtocolFieldNumber = 6,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class SmbusReadFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  SmbusReadFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit SmbusReadFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit SmbusReadFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_flags() const { return at<2>().valid(); }
  uint32_t flags() const { return at<2>().as_uint32(); }
  bool has_addr() const { return at<3>().valid(); }
  uint32_t addr() const { return at<3>().as_uint32(); }
  bool has_command() const { return at<4>().valid(); }
  uint32_t command() const { return at<4>().as_uint32(); }
  bool has_protocol() const { return at<5>().valid(); }
  uint32_t protocol() const { return at<5>().as_uint32(); }
};

class SmbusReadFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = SmbusReadFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kFlagsFieldNumber = 2,
    kAddrFieldNumber = 3,
    kCommandFieldNumber = 4,
    kProtocolFieldNumber = 5,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_command(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_protocol(uint32_t value) {
    AppendVarInt(5, value);
  }
};

class I2cReplyFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  I2cReplyFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit I2cReplyFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit I2cReplyFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_msg_nr() const { return at<2>().valid(); }
  uint32_t msg_nr() const { return at<2>().as_uint32(); }
  bool has_addr() const { return at<3>().valid(); }
  uint32_t addr() const { return at<3>().as_uint32(); }
  bool has_flags() const { return at<4>().valid(); }
  uint32_t flags() const { return at<4>().as_uint32(); }
  bool has_len() const { return at<5>().valid(); }
  uint32_t len() const { return at<5>().as_uint32(); }
  bool has_buf() const { return at<6>().valid(); }
  uint32_t buf() const { return at<6>().as_uint32(); }
};

class I2cReplyFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = I2cReplyFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
    kBufFieldNumber = 6,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_buf(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class I2cResultFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  I2cResultFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit I2cResultFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit I2cResultFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_nr_msgs() const { return at<2>().valid(); }
  uint32_t nr_msgs() const { return at<2>().as_uint32(); }
  bool has_ret() const { return at<3>().valid(); }
  int32_t ret() const { return at<3>().as_int32(); }
};

class I2cResultFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = I2cResultFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kNrMsgsFieldNumber = 2,
    kRetFieldNumber = 3,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_nr_msgs(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_ret(int32_t value) {
    AppendVarInt(3, value);
  }
};

class I2cWriteFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  I2cWriteFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit I2cWriteFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit I2cWriteFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_msg_nr() const { return at<2>().valid(); }
  uint32_t msg_nr() const { return at<2>().as_uint32(); }
  bool has_addr() const { return at<3>().valid(); }
  uint32_t addr() const { return at<3>().as_uint32(); }
  bool has_flags() const { return at<4>().valid(); }
  uint32_t flags() const { return at<4>().as_uint32(); }
  bool has_len() const { return at<5>().valid(); }
  uint32_t len() const { return at<5>().as_uint32(); }
  bool has_buf() const { return at<6>().valid(); }
  uint32_t buf() const { return at<6>().as_uint32(); }
};

class I2cWriteFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = I2cWriteFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
    kBufFieldNumber = 6,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
  void set_buf(uint32_t value) {
    AppendVarInt(6, value);
  }
};

class I2cReadFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  I2cReadFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit I2cReadFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit I2cReadFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_adapter_nr() const { return at<1>().valid(); }
  int32_t adapter_nr() const { return at<1>().as_int32(); }
  bool has_msg_nr() const { return at<2>().valid(); }
  uint32_t msg_nr() const { return at<2>().as_uint32(); }
  bool has_addr() const { return at<3>().valid(); }
  uint32_t addr() const { return at<3>().as_uint32(); }
  bool has_flags() const { return at<4>().valid(); }
  uint32_t flags() const { return at<4>().as_uint32(); }
  bool has_len() const { return at<5>().valid(); }
  uint32_t len() const { return at<5>().as_uint32(); }
};

class I2cReadFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = I2cReadFtraceEvent_Decoder;
  enum : int32_t {
    kAdapterNrFieldNumber = 1,
    kMsgNrFieldNumber = 2,
    kAddrFieldNumber = 3,
    kFlagsFieldNumber = 4,
    kLenFieldNumber = 5,
  };
  void set_adapter_nr(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_msg_nr(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_addr(uint32_t value) {
    AppendVarInt(3, value);
  }
  void set_flags(uint32_t value) {
    AppendVarInt(4, value);
  }
  void set_len(uint32_t value) {
    AppendVarInt(5, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
