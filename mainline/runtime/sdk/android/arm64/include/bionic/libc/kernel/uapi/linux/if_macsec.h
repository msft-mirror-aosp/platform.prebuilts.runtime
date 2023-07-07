/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_MACSEC_H
#define _UAPI_MACSEC_H
#include <linux/types.h>
#define MACSEC_GENL_NAME "macsec"
#define MACSEC_GENL_VERSION 1
#define MACSEC_MAX_KEY_LEN 128
#define MACSEC_KEYID_LEN 16
#define MACSEC_SALT_LEN 12
#define MACSEC_CIPHER_ID_GCM_AES_128 0x0080C20001000001ULL
#define MACSEC_CIPHER_ID_GCM_AES_256 0x0080C20001000002ULL
#define MACSEC_CIPHER_ID_GCM_AES_XPN_128 0x0080C20001000003ULL
#define MACSEC_CIPHER_ID_GCM_AES_XPN_256 0x0080C20001000004ULL
#define MACSEC_DEFAULT_CIPHER_ID 0x0080020001000001ULL
#define MACSEC_DEFAULT_CIPHER_ALT MACSEC_CIPHER_ID_GCM_AES_128
#define MACSEC_MIN_ICV_LEN 8
#define MACSEC_MAX_ICV_LEN 32
#define MACSEC_STD_ICV_LEN 16
enum macsec_attrs {
  MACSEC_ATTR_UNSPEC,
  MACSEC_ATTR_IFINDEX,
  MACSEC_ATTR_RXSC_CONFIG,
  MACSEC_ATTR_SA_CONFIG,
  MACSEC_ATTR_SECY,
  MACSEC_ATTR_TXSA_LIST,
  MACSEC_ATTR_RXSC_LIST,
  MACSEC_ATTR_TXSC_STATS,
  MACSEC_ATTR_SECY_STATS,
  MACSEC_ATTR_OFFLOAD,
  __MACSEC_ATTR_END,
  NUM_MACSEC_ATTR = __MACSEC_ATTR_END,
  MACSEC_ATTR_MAX = __MACSEC_ATTR_END - 1,
};
enum macsec_secy_attrs {
  MACSEC_SECY_ATTR_UNSPEC,
  MACSEC_SECY_ATTR_SCI,
  MACSEC_SECY_ATTR_ENCODING_SA,
  MACSEC_SECY_ATTR_WINDOW,
  MACSEC_SECY_ATTR_CIPHER_SUITE,
  MACSEC_SECY_ATTR_ICV_LEN,
  MACSEC_SECY_ATTR_PROTECT,
  MACSEC_SECY_ATTR_REPLAY,
  MACSEC_SECY_ATTR_OPER,
  MACSEC_SECY_ATTR_VALIDATE,
  MACSEC_SECY_ATTR_ENCRYPT,
  MACSEC_SECY_ATTR_INC_SCI,
  MACSEC_SECY_ATTR_ES,
  MACSEC_SECY_ATTR_SCB,
  MACSEC_SECY_ATTR_PAD,
  __MACSEC_SECY_ATTR_END,
  NUM_MACSEC_SECY_ATTR = __MACSEC_SECY_ATTR_END,
  MACSEC_SECY_ATTR_MAX = __MACSEC_SECY_ATTR_END - 1,
};
enum macsec_rxsc_attrs {
  MACSEC_RXSC_ATTR_UNSPEC,
  MACSEC_RXSC_ATTR_SCI,
  MACSEC_RXSC_ATTR_ACTIVE,
  MACSEC_RXSC_ATTR_SA_LIST,
  MACSEC_RXSC_ATTR_STATS,
  MACSEC_RXSC_ATTR_PAD,
  __MACSEC_RXSC_ATTR_END,
  NUM_MACSEC_RXSC_ATTR = __MACSEC_RXSC_ATTR_END,
  MACSEC_RXSC_ATTR_MAX = __MACSEC_RXSC_ATTR_END - 1,
};
enum macsec_sa_attrs {
  MACSEC_SA_ATTR_UNSPEC,
  MACSEC_SA_ATTR_AN,
  MACSEC_SA_ATTR_ACTIVE,
  MACSEC_SA_ATTR_PN,
  MACSEC_SA_ATTR_KEY,
  MACSEC_SA_ATTR_KEYID,
  MACSEC_SA_ATTR_STATS,
  MACSEC_SA_ATTR_PAD,
  MACSEC_SA_ATTR_SSCI,
  MACSEC_SA_ATTR_SALT,
  __MACSEC_SA_ATTR_END,
  NUM_MACSEC_SA_ATTR = __MACSEC_SA_ATTR_END,
  MACSEC_SA_ATTR_MAX = __MACSEC_SA_ATTR_END - 1,
};
enum macsec_offload_attrs {
  MACSEC_OFFLOAD_ATTR_UNSPEC,
  MACSEC_OFFLOAD_ATTR_TYPE,
  MACSEC_OFFLOAD_ATTR_PAD,
  __MACSEC_OFFLOAD_ATTR_END,
  NUM_MACSEC_OFFLOAD_ATTR = __MACSEC_OFFLOAD_ATTR_END,
  MACSEC_OFFLOAD_ATTR_MAX = __MACSEC_OFFLOAD_ATTR_END - 1,
};
enum macsec_nl_commands {
  MACSEC_CMD_GET_TXSC,
  MACSEC_CMD_ADD_RXSC,
  MACSEC_CMD_DEL_RXSC,
  MACSEC_CMD_UPD_RXSC,
  MACSEC_CMD_ADD_TXSA,
  MACSEC_CMD_DEL_TXSA,
  MACSEC_CMD_UPD_TXSA,
  MACSEC_CMD_ADD_RXSA,
  MACSEC_CMD_DEL_RXSA,
  MACSEC_CMD_UPD_RXSA,
  MACSEC_CMD_UPD_OFFLOAD,
};
enum macsec_rxsc_stats_attr {
  MACSEC_RXSC_STATS_ATTR_UNSPEC,
  MACSEC_RXSC_STATS_ATTR_IN_OCTETS_VALIDATED,
  MACSEC_RXSC_STATS_ATTR_IN_OCTETS_DECRYPTED,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_UNCHECKED,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_DELAYED,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_OK,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_INVALID,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_LATE,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_NOT_VALID,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_NOT_USING_SA,
  MACSEC_RXSC_STATS_ATTR_IN_PKTS_UNUSED_SA,
  MACSEC_RXSC_STATS_ATTR_PAD,
  __MACSEC_RXSC_STATS_ATTR_END,
  NUM_MACSEC_RXSC_STATS_ATTR = __MACSEC_RXSC_STATS_ATTR_END,
  MACSEC_RXSC_STATS_ATTR_MAX = __MACSEC_RXSC_STATS_ATTR_END - 1,
};
enum macsec_sa_stats_attr {
  MACSEC_SA_STATS_ATTR_UNSPEC,
  MACSEC_SA_STATS_ATTR_IN_PKTS_OK,
  MACSEC_SA_STATS_ATTR_IN_PKTS_INVALID,
  MACSEC_SA_STATS_ATTR_IN_PKTS_NOT_VALID,
  MACSEC_SA_STATS_ATTR_IN_PKTS_NOT_USING_SA,
  MACSEC_SA_STATS_ATTR_IN_PKTS_UNUSED_SA,
  MACSEC_SA_STATS_ATTR_OUT_PKTS_PROTECTED,
  MACSEC_SA_STATS_ATTR_OUT_PKTS_ENCRYPTED,
  __MACSEC_SA_STATS_ATTR_END,
  NUM_MACSEC_SA_STATS_ATTR = __MACSEC_SA_STATS_ATTR_END,
  MACSEC_SA_STATS_ATTR_MAX = __MACSEC_SA_STATS_ATTR_END - 1,
};
enum macsec_txsc_stats_attr {
  MACSEC_TXSC_STATS_ATTR_UNSPEC,
  MACSEC_TXSC_STATS_ATTR_OUT_PKTS_PROTECTED,
  MACSEC_TXSC_STATS_ATTR_OUT_PKTS_ENCRYPTED,
  MACSEC_TXSC_STATS_ATTR_OUT_OCTETS_PROTECTED,
  MACSEC_TXSC_STATS_ATTR_OUT_OCTETS_ENCRYPTED,
  MACSEC_TXSC_STATS_ATTR_PAD,
  __MACSEC_TXSC_STATS_ATTR_END,
  NUM_MACSEC_TXSC_STATS_ATTR = __MACSEC_TXSC_STATS_ATTR_END,
  MACSEC_TXSC_STATS_ATTR_MAX = __MACSEC_TXSC_STATS_ATTR_END - 1,
};
enum macsec_secy_stats_attr {
  MACSEC_SECY_STATS_ATTR_UNSPEC,
  MACSEC_SECY_STATS_ATTR_OUT_PKTS_UNTAGGED,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_UNTAGGED,
  MACSEC_SECY_STATS_ATTR_OUT_PKTS_TOO_LONG,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_NO_TAG,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_BAD_TAG,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_UNKNOWN_SCI,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_NO_SCI,
  MACSEC_SECY_STATS_ATTR_IN_PKTS_OVERRUN,
  MACSEC_SECY_STATS_ATTR_PAD,
  __MACSEC_SECY_STATS_ATTR_END,
  NUM_MACSEC_SECY_STATS_ATTR = __MACSEC_SECY_STATS_ATTR_END,
  MACSEC_SECY_STATS_ATTR_MAX = __MACSEC_SECY_STATS_ATTR_END - 1,
};
#endif
