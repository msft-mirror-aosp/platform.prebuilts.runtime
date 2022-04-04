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
#ifndef _COMEDI_H
#define _COMEDI_H
#define COMEDI_MAJORVERSION 0
#define COMEDI_MINORVERSION 7
#define COMEDI_MICROVERSION 76
#define VERSION "0.7.76"
#define COMEDI_MAJOR 98
#define COMEDI_NDEVICES 16
#define COMEDI_NDEVCONFOPTS 32
#define COMEDI_DEVCONF_AUX_DATA3_LENGTH 25
#define COMEDI_DEVCONF_AUX_DATA2_LENGTH 26
#define COMEDI_DEVCONF_AUX_DATA1_LENGTH 27
#define COMEDI_DEVCONF_AUX_DATA0_LENGTH 28
#define COMEDI_DEVCONF_AUX_DATA_HI 29
#define COMEDI_DEVCONF_AUX_DATA_LO 30
#define COMEDI_DEVCONF_AUX_DATA_LENGTH 31
#define COMEDI_NAMELEN 20
#define CR_PACK(chan,rng,aref) ((((aref) & 0x3) << 24) | (((rng) & 0xff) << 16) | (chan))
#define CR_PACK_FLAGS(chan,range,aref,flags) (CR_PACK(chan, range, aref) | ((flags) & CR_FLAGS_MASK))
#define CR_CHAN(a) ((a) & 0xffff)
#define CR_RANGE(a) (((a) >> 16) & 0xff)
#define CR_AREF(a) (((a) >> 24) & 0x03)
#define CR_FLAGS_MASK 0xfc000000
#define CR_ALT_FILTER 0x04000000
#define CR_DITHER CR_ALT_FILTER
#define CR_DEGLITCH CR_ALT_FILTER
#define CR_ALT_SOURCE 0x08000000
#define CR_EDGE 0x40000000
#define CR_INVERT 0x80000000
#define AREF_GROUND 0x00
#define AREF_COMMON 0x01
#define AREF_DIFF 0x02
#define AREF_OTHER 0x03
#define GPCT_RESET 0x0001
#define GPCT_SET_SOURCE 0x0002
#define GPCT_SET_GATE 0x0004
#define GPCT_SET_DIRECTION 0x0008
#define GPCT_SET_OPERATION 0x0010
#define GPCT_ARM 0x0020
#define GPCT_DISARM 0x0040
#define GPCT_GET_INT_CLK_FRQ 0x0080
#define GPCT_INT_CLOCK 0x0001
#define GPCT_EXT_PIN 0x0002
#define GPCT_NO_GATE 0x0004
#define GPCT_UP 0x0008
#define GPCT_DOWN 0x0010
#define GPCT_HWUD 0x0020
#define GPCT_SIMPLE_EVENT 0x0040
#define GPCT_SINGLE_PERIOD 0x0080
#define GPCT_SINGLE_PW 0x0100
#define GPCT_CONT_PULSE_OUT 0x0200
#define GPCT_SINGLE_PULSE_OUT 0x0400
#define INSN_MASK_WRITE 0x8000000
#define INSN_MASK_READ 0x4000000
#define INSN_MASK_SPECIAL 0x2000000
#define INSN_READ (0 | INSN_MASK_READ)
#define INSN_WRITE (1 | INSN_MASK_WRITE)
#define INSN_BITS (2 | INSN_MASK_READ | INSN_MASK_WRITE)
#define INSN_CONFIG (3 | INSN_MASK_READ | INSN_MASK_WRITE)
#define INSN_DEVICE_CONFIG (INSN_CONFIG | INSN_MASK_SPECIAL)
#define INSN_GTOD (4 | INSN_MASK_READ | INSN_MASK_SPECIAL)
#define INSN_WAIT (5 | INSN_MASK_WRITE | INSN_MASK_SPECIAL)
#define INSN_INTTRIG (6 | INSN_MASK_WRITE | INSN_MASK_SPECIAL)
#define CMDF_BOGUS 0x00000001
#define CMDF_PRIORITY 0x00000008
#define CMDF_WAKE_EOS 0x00000020
#define CMDF_WRITE 0x00000040
#define CMDF_RAWDATA 0x00000080
#define CMDF_ROUND_MASK 0x00030000
#define CMDF_ROUND_NEAREST 0x00000000
#define CMDF_ROUND_DOWN 0x00010000
#define CMDF_ROUND_UP 0x00020000
#define CMDF_ROUND_UP_NEXT 0x00030000
#define COMEDI_EV_START 0x00040000
#define COMEDI_EV_SCAN_BEGIN 0x00080000
#define COMEDI_EV_CONVERT 0x00100000
#define COMEDI_EV_SCAN_END 0x00200000
#define COMEDI_EV_STOP 0x00400000
#define TRIG_BOGUS CMDF_BOGUS
#define TRIG_RT CMDF_PRIORITY
#define TRIG_WAKE_EOS CMDF_WAKE_EOS
#define TRIG_WRITE CMDF_WRITE
#define TRIG_ROUND_MASK CMDF_ROUND_MASK
#define TRIG_ROUND_NEAREST CMDF_ROUND_NEAREST
#define TRIG_ROUND_DOWN CMDF_ROUND_DOWN
#define TRIG_ROUND_UP CMDF_ROUND_UP
#define TRIG_ROUND_UP_NEXT CMDF_ROUND_UP_NEXT
#define TRIG_ANY 0xffffffff
#define TRIG_INVALID 0x00000000
#define TRIG_NONE 0x00000001
#define TRIG_NOW 0x00000002
#define TRIG_FOLLOW 0x00000004
#define TRIG_TIME 0x00000008
#define TRIG_TIMER 0x00000010
#define TRIG_COUNT 0x00000020
#define TRIG_EXT 0x00000040
#define TRIG_INT 0x00000080
#define TRIG_OTHER 0x00000100
#define SDF_BUSY 0x0001
#define SDF_BUSY_OWNER 0x0002
#define SDF_LOCKED 0x0004
#define SDF_LOCK_OWNER 0x0008
#define SDF_MAXDATA 0x0010
#define SDF_FLAGS 0x0020
#define SDF_RANGETYPE 0x0040
#define SDF_PWM_COUNTER 0x0080
#define SDF_PWM_HBRIDGE 0x0100
#define SDF_CMD 0x1000
#define SDF_SOFT_CALIBRATED 0x2000
#define SDF_CMD_WRITE 0x4000
#define SDF_CMD_READ 0x8000
#define SDF_READABLE 0x00010000
#define SDF_WRITABLE 0x00020000
#define SDF_WRITEABLE SDF_WRITABLE
#define SDF_INTERNAL 0x00040000
#define SDF_GROUND 0x00100000
#define SDF_COMMON 0x00200000
#define SDF_DIFF 0x00400000
#define SDF_OTHER 0x00800000
#define SDF_DITHER 0x01000000
#define SDF_DEGLITCH 0x02000000
#define SDF_MMAP 0x04000000
#define SDF_RUNNING 0x08000000
#define SDF_LSAMPL 0x10000000
#define SDF_PACKED 0x20000000
enum comedi_subdevice_type {
  COMEDI_SUBD_UNUSED,
  COMEDI_SUBD_AI,
  COMEDI_SUBD_AO,
  COMEDI_SUBD_DI,
  COMEDI_SUBD_DO,
  COMEDI_SUBD_DIO,
  COMEDI_SUBD_COUNTER,
  COMEDI_SUBD_TIMER,
  COMEDI_SUBD_MEMORY,
  COMEDI_SUBD_CALIB,
  COMEDI_SUBD_PROC,
  COMEDI_SUBD_SERIAL,
  COMEDI_SUBD_PWM
};
enum comedi_io_direction {
  COMEDI_INPUT = 0,
  COMEDI_OUTPUT = 1,
  COMEDI_OPENDRAIN = 2
};
enum configuration_ids {
  INSN_CONFIG_DIO_INPUT = COMEDI_INPUT,
  INSN_CONFIG_DIO_OUTPUT = COMEDI_OUTPUT,
  INSN_CONFIG_DIO_OPENDRAIN = COMEDI_OPENDRAIN,
  INSN_CONFIG_ANALOG_TRIG = 16,
  INSN_CONFIG_ALT_SOURCE = 20,
  INSN_CONFIG_DIGITAL_TRIG = 21,
  INSN_CONFIG_BLOCK_SIZE = 22,
  INSN_CONFIG_TIMER_1 = 23,
  INSN_CONFIG_FILTER = 24,
  INSN_CONFIG_CHANGE_NOTIFY = 25,
  INSN_CONFIG_SERIAL_CLOCK = 26,
  INSN_CONFIG_BIDIRECTIONAL_DATA = 27,
  INSN_CONFIG_DIO_QUERY = 28,
  INSN_CONFIG_PWM_OUTPUT = 29,
  INSN_CONFIG_GET_PWM_OUTPUT = 30,
  INSN_CONFIG_ARM = 31,
  INSN_CONFIG_DISARM = 32,
  INSN_CONFIG_GET_COUNTER_STATUS = 33,
  INSN_CONFIG_RESET = 34,
  INSN_CONFIG_GPCT_SINGLE_PULSE_GENERATOR = 1001,
  INSN_CONFIG_GPCT_PULSE_TRAIN_GENERATOR = 1002,
  INSN_CONFIG_GPCT_QUADRATURE_ENCODER = 1003,
  INSN_CONFIG_SET_GATE_SRC = 2001,
  INSN_CONFIG_GET_GATE_SRC = 2002,
  INSN_CONFIG_SET_CLOCK_SRC = 2003,
  INSN_CONFIG_GET_CLOCK_SRC = 2004,
  INSN_CONFIG_SET_OTHER_SRC = 2005,
  INSN_CONFIG_GET_HARDWARE_BUFFER_SIZE = 2006,
  INSN_CONFIG_SET_COUNTER_MODE = 4097,
  INSN_CONFIG_8254_SET_MODE = INSN_CONFIG_SET_COUNTER_MODE,
  INSN_CONFIG_8254_READ_STATUS = 4098,
  INSN_CONFIG_SET_ROUTING = 4099,
  INSN_CONFIG_GET_ROUTING = 4109,
  INSN_CONFIG_PWM_SET_PERIOD = 5000,
  INSN_CONFIG_PWM_GET_PERIOD = 5001,
  INSN_CONFIG_GET_PWM_STATUS = 5002,
  INSN_CONFIG_PWM_SET_H_BRIDGE = 5003,
  INSN_CONFIG_PWM_GET_H_BRIDGE = 5004,
  INSN_CONFIG_GET_CMD_TIMING_CONSTRAINTS = 5005,
};
enum device_config_route_ids {
  INSN_DEVICE_CONFIG_TEST_ROUTE = 0,
  INSN_DEVICE_CONFIG_CONNECT_ROUTE = 1,
  INSN_DEVICE_CONFIG_DISCONNECT_ROUTE = 2,
  INSN_DEVICE_CONFIG_GET_ROUTES = 3,
};
enum comedi_digital_trig_op {
  COMEDI_DIGITAL_TRIG_DISABLE = 0,
  COMEDI_DIGITAL_TRIG_ENABLE_EDGES = 1,
  COMEDI_DIGITAL_TRIG_ENABLE_LEVELS = 2
};
enum comedi_support_level {
  COMEDI_UNKNOWN_SUPPORT = 0,
  COMEDI_SUPPORTED,
  COMEDI_UNSUPPORTED
};
enum comedi_counter_status_flags {
  COMEDI_COUNTER_ARMED = 0x1,
  COMEDI_COUNTER_COUNTING = 0x2,
  COMEDI_COUNTER_TERMINAL_COUNT = 0x4,
};
#define CIO 'd'
#define COMEDI_DEVCONFIG _IOW(CIO, 0, struct comedi_devconfig)
#define COMEDI_DEVINFO _IOR(CIO, 1, struct comedi_devinfo)
#define COMEDI_SUBDINFO _IOR(CIO, 2, struct comedi_subdinfo)
#define COMEDI_CHANINFO _IOR(CIO, 3, struct comedi_chaninfo)
#define COMEDI_LOCK _IO(CIO, 5)
#define COMEDI_UNLOCK _IO(CIO, 6)
#define COMEDI_CANCEL _IO(CIO, 7)
#define COMEDI_RANGEINFO _IOR(CIO, 8, struct comedi_rangeinfo)
#define COMEDI_CMD _IOR(CIO, 9, struct comedi_cmd)
#define COMEDI_CMDTEST _IOR(CIO, 10, struct comedi_cmd)
#define COMEDI_INSNLIST _IOR(CIO, 11, struct comedi_insnlist)
#define COMEDI_INSN _IOR(CIO, 12, struct comedi_insn)
#define COMEDI_BUFCONFIG _IOR(CIO, 13, struct comedi_bufconfig)
#define COMEDI_BUFINFO _IOWR(CIO, 14, struct comedi_bufinfo)
#define COMEDI_POLL _IO(CIO, 15)
#define COMEDI_SETRSUBD _IO(CIO, 16)
#define COMEDI_SETWSUBD _IO(CIO, 17)
struct comedi_insn {
  unsigned int insn;
  unsigned int n;
  unsigned int __user * data;
  unsigned int subdev;
  unsigned int chanspec;
  unsigned int unused[3];
};
struct comedi_insnlist {
  unsigned int n_insns;
  struct comedi_insn __user * insns;
};
struct comedi_cmd {
  unsigned int subdev;
  unsigned int flags;
  unsigned int start_src;
  unsigned int start_arg;
  unsigned int scan_begin_src;
  unsigned int scan_begin_arg;
  unsigned int convert_src;
  unsigned int convert_arg;
  unsigned int scan_end_src;
  unsigned int scan_end_arg;
  unsigned int stop_src;
  unsigned int stop_arg;
  unsigned int * chanlist;
  unsigned int chanlist_len;
  short __user * data;
  unsigned int data_len;
};
struct comedi_chaninfo {
  unsigned int subdev;
  unsigned int __user * maxdata_list;
  unsigned int __user * flaglist;
  unsigned int __user * rangelist;
  unsigned int unused[4];
};
struct comedi_rangeinfo {
  unsigned int range_type;
  void __user * range_ptr;
};
struct comedi_krange {
  int min;
  int max;
  unsigned int flags;
};
struct comedi_subdinfo {
  unsigned int type;
  unsigned int n_chan;
  unsigned int subd_flags;
  unsigned int timer_type;
  unsigned int len_chanlist;
  unsigned int maxdata;
  unsigned int flags;
  unsigned int range_type;
  unsigned int settling_time_0;
  unsigned int insn_bits_support;
  unsigned int unused[8];
};
struct comedi_devinfo {
  unsigned int version_code;
  unsigned int n_subdevs;
  char driver_name[COMEDI_NAMELEN];
  char board_name[COMEDI_NAMELEN];
  int read_subdevice;
  int write_subdevice;
  int unused[30];
};
struct comedi_devconfig {
  char board_name[COMEDI_NAMELEN];
  int options[COMEDI_NDEVCONFOPTS];
};
struct comedi_bufconfig {
  unsigned int subdevice;
  unsigned int flags;
  unsigned int maximum_size;
  unsigned int size;
  unsigned int unused[4];
};
struct comedi_bufinfo {
  unsigned int subdevice;
  unsigned int bytes_read;
  unsigned int buf_write_ptr;
  unsigned int buf_read_ptr;
  unsigned int buf_write_count;
  unsigned int buf_read_count;
  unsigned int bytes_written;
  unsigned int unused[4];
};
#define __RANGE(a,b) ((((a) & 0xffff) << 16) | ((b) & 0xffff))
#define RANGE_OFFSET(a) (((a) >> 16) & 0xffff)
#define RANGE_LENGTH(b) ((b) & 0xffff)
#define RF_UNIT(flags) ((flags) & 0xff)
#define RF_EXTERNAL 0x100
#define UNIT_volt 0
#define UNIT_mA 1
#define UNIT_none 2
#define COMEDI_MIN_SPEED 0xffffffffu
enum i8254_mode {
  I8254_MODE0 = (0 << 1),
  I8254_MODE1 = (1 << 1),
  I8254_MODE2 = (2 << 1),
  I8254_MODE3 = (3 << 1),
  I8254_MODE4 = (4 << 1),
  I8254_MODE5 = (5 << 1),
  I8254_BCD = 1,
  I8254_BINARY = 0
};
#define NI_NAMES_BASE 0x8000u
#define _TERM_N(base,n,x) ((base) + ((x) & ((n) - 1)))
#define NI_PFI(x) _TERM_N(NI_NAMES_BASE, 64, x)
#define TRIGGER_LINE(x) _TERM_N(NI_PFI(- 1) + 1, 8, x)
#define NI_RTSI_BRD(x) _TERM_N(TRIGGER_LINE(- 1) + 1, 4, x)
#define NI_MAX_COUNTERS 8
#define NI_COUNTER_NAMES_BASE (NI_RTSI_BRD(- 1) + 1)
#define NI_CtrSource(x) _TERM_N(NI_COUNTER_NAMES_BASE, NI_MAX_COUNTERS, x)
#define NI_GATES_NAMES_BASE (NI_CtrSource(- 1) + 1)
#define NI_CtrGate(x) _TERM_N(NI_GATES_NAMES_BASE, NI_MAX_COUNTERS, x)
#define NI_CtrAux(x) _TERM_N(NI_CtrGate(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrA(x) _TERM_N(NI_CtrAux(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrB(x) _TERM_N(NI_CtrA(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrZ(x) _TERM_N(NI_CtrB(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_GATES_NAMES_MAX NI_CtrZ(- 1)
#define NI_CtrArmStartTrigger(x) _TERM_N(NI_CtrZ(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrInternalOutput(x) _TERM_N(NI_CtrArmStartTrigger(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrOut(x) _TERM_N(NI_CtrInternalOutput(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_CtrSampleClock(x) _TERM_N(NI_CtrOut(- 1) + 1, NI_MAX_COUNTERS, x)
#define NI_COUNTER_NAMES_MAX NI_CtrSampleClock(- 1)
enum ni_common_signal_names {
  PXI_Star = NI_COUNTER_NAMES_MAX + 1,
  PXI_Clk10,
  PXIe_Clk100,
  NI_AI_SampleClock,
  NI_AI_SampleClockTimebase,
  NI_AI_StartTrigger,
  NI_AI_ReferenceTrigger,
  NI_AI_ConvertClock,
  NI_AI_ConvertClockTimebase,
  NI_AI_PauseTrigger,
  NI_AI_HoldCompleteEvent,
  NI_AI_HoldComplete,
  NI_AI_ExternalMUXClock,
  NI_AI_STOP,
  NI_AO_SampleClock,
  NI_AO_SampleClockTimebase,
  NI_AO_StartTrigger,
  NI_AO_PauseTrigger,
  NI_DI_SampleClock,
  NI_DI_SampleClockTimebase,
  NI_DI_StartTrigger,
  NI_DI_ReferenceTrigger,
  NI_DI_PauseTrigger,
  NI_DI_InputBufferFull,
  NI_DI_ReadyForStartEvent,
  NI_DI_ReadyForTransferEventBurst,
  NI_DI_ReadyForTransferEventPipelined,
  NI_DO_SampleClock,
  NI_DO_SampleClockTimebase,
  NI_DO_StartTrigger,
  NI_DO_PauseTrigger,
  NI_DO_OutputBufferFull,
  NI_DO_DataActiveEvent,
  NI_DO_ReadyForStartEvent,
  NI_DO_ReadyForTransferEvent,
  NI_MasterTimebase,
  NI_20MHzTimebase,
  NI_80MHzTimebase,
  NI_100MHzTimebase,
  NI_200MHzTimebase,
  NI_100kHzTimebase,
  NI_10MHzRefClock,
  NI_FrequencyOutput,
  NI_ChangeDetectionEvent,
  NI_AnalogComparisonEvent,
  NI_WatchdogExpiredEvent,
  NI_WatchdogExpirationTrigger,
  NI_SCXI_Trig1,
  NI_LogicLow,
  NI_LogicHigh,
  NI_ExternalStrobe,
  NI_PFI_DO,
  NI_CaseGround,
  NI_RGOUT0,
  _NI_NAMES_MAX_PLUS_1,
  NI_NUM_NAMES = _NI_NAMES_MAX_PLUS_1 - NI_NAMES_BASE,
};
#define NI_USUAL_PFI_SELECT(x) (((x) < 10) ? (0x1 + (x)) : (0xb + (x)))
#define NI_USUAL_RTSI_SELECT(x) (((x) < 7) ? (0xb + (x)) : 0x1b)
#define NI_GPCT_COUNTING_MODE_SHIFT 16
#define NI_GPCT_INDEX_PHASE_BITSHIFT 20
#define NI_GPCT_COUNTING_DIRECTION_SHIFT 24
enum ni_gpct_mode_bits {
  NI_GPCT_GATE_ON_BOTH_EDGES_BIT = 0x4,
  NI_GPCT_EDGE_GATE_MODE_MASK = 0x18,
  NI_GPCT_EDGE_GATE_STARTS_STOPS_BITS = 0x0,
  NI_GPCT_EDGE_GATE_STOPS_STARTS_BITS = 0x8,
  NI_GPCT_EDGE_GATE_STARTS_BITS = 0x10,
  NI_GPCT_EDGE_GATE_NO_STARTS_NO_STOPS_BITS = 0x18,
  NI_GPCT_STOP_MODE_MASK = 0x60,
  NI_GPCT_STOP_ON_GATE_BITS = 0x00,
  NI_GPCT_STOP_ON_GATE_OR_TC_BITS = 0x20,
  NI_GPCT_STOP_ON_GATE_OR_SECOND_TC_BITS = 0x40,
  NI_GPCT_LOAD_B_SELECT_BIT = 0x80,
  NI_GPCT_OUTPUT_MODE_MASK = 0x300,
  NI_GPCT_OUTPUT_TC_PULSE_BITS = 0x100,
  NI_GPCT_OUTPUT_TC_TOGGLE_BITS = 0x200,
  NI_GPCT_OUTPUT_TC_OR_GATE_TOGGLE_BITS = 0x300,
  NI_GPCT_HARDWARE_DISARM_MASK = 0xc00,
  NI_GPCT_NO_HARDWARE_DISARM_BITS = 0x000,
  NI_GPCT_DISARM_AT_TC_BITS = 0x400,
  NI_GPCT_DISARM_AT_GATE_BITS = 0x800,
  NI_GPCT_DISARM_AT_TC_OR_GATE_BITS = 0xc00,
  NI_GPCT_LOADING_ON_TC_BIT = 0x1000,
  NI_GPCT_LOADING_ON_GATE_BIT = 0x4000,
  NI_GPCT_COUNTING_MODE_MASK = 0x7 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_NORMAL_BITS = 0x0 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_QUADRATURE_X1_BITS = 0x1 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_QUADRATURE_X2_BITS = 0x2 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_QUADRATURE_X4_BITS = 0x3 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_TWO_PULSE_BITS = 0x4 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_COUNTING_MODE_SYNC_SOURCE_BITS = 0x6 << NI_GPCT_COUNTING_MODE_SHIFT,
  NI_GPCT_INDEX_PHASE_MASK = 0x3 << NI_GPCT_INDEX_PHASE_BITSHIFT,
  NI_GPCT_INDEX_PHASE_LOW_A_LOW_B_BITS = 0x0 << NI_GPCT_INDEX_PHASE_BITSHIFT,
  NI_GPCT_INDEX_PHASE_LOW_A_HIGH_B_BITS = 0x1 << NI_GPCT_INDEX_PHASE_BITSHIFT,
  NI_GPCT_INDEX_PHASE_HIGH_A_LOW_B_BITS = 0x2 << NI_GPCT_INDEX_PHASE_BITSHIFT,
  NI_GPCT_INDEX_PHASE_HIGH_A_HIGH_B_BITS = 0x3 << NI_GPCT_INDEX_PHASE_BITSHIFT,
  NI_GPCT_INDEX_ENABLE_BIT = 0x400000,
  NI_GPCT_COUNTING_DIRECTION_MASK = 0x3 << NI_GPCT_COUNTING_DIRECTION_SHIFT,
  NI_GPCT_COUNTING_DIRECTION_DOWN_BITS = 0x00 << NI_GPCT_COUNTING_DIRECTION_SHIFT,
  NI_GPCT_COUNTING_DIRECTION_UP_BITS = 0x1 << NI_GPCT_COUNTING_DIRECTION_SHIFT,
  NI_GPCT_COUNTING_DIRECTION_HW_UP_DOWN_BITS = 0x2 << NI_GPCT_COUNTING_DIRECTION_SHIFT,
  NI_GPCT_COUNTING_DIRECTION_HW_GATE_BITS = 0x3 << NI_GPCT_COUNTING_DIRECTION_SHIFT,
  NI_GPCT_RELOAD_SOURCE_MASK = 0xc000000,
  NI_GPCT_RELOAD_SOURCE_FIXED_BITS = 0x0,
  NI_GPCT_RELOAD_SOURCE_SWITCHING_BITS = 0x4000000,
  NI_GPCT_RELOAD_SOURCE_GATE_SELECT_BITS = 0x8000000,
  NI_GPCT_OR_GATE_BIT = 0x10000000,
  NI_GPCT_INVERT_OUTPUT_BIT = 0x20000000
};
enum ni_gpct_clock_source_bits {
  NI_GPCT_CLOCK_SRC_SELECT_MASK = 0x3f,
  NI_GPCT_TIMEBASE_1_CLOCK_SRC_BITS = 0x0,
  NI_GPCT_TIMEBASE_2_CLOCK_SRC_BITS = 0x1,
  NI_GPCT_TIMEBASE_3_CLOCK_SRC_BITS = 0x2,
  NI_GPCT_LOGIC_LOW_CLOCK_SRC_BITS = 0x3,
  NI_GPCT_NEXT_GATE_CLOCK_SRC_BITS = 0x4,
  NI_GPCT_NEXT_TC_CLOCK_SRC_BITS = 0x5,
  NI_GPCT_SOURCE_PIN_i_CLOCK_SRC_BITS = 0x6,
  NI_GPCT_PXI10_CLOCK_SRC_BITS = 0x7,
  NI_GPCT_PXI_STAR_TRIGGER_CLOCK_SRC_BITS = 0x8,
  NI_GPCT_ANALOG_TRIGGER_OUT_CLOCK_SRC_BITS = 0x9,
  NI_GPCT_PRESCALE_MODE_CLOCK_SRC_MASK = 0x30000000,
  NI_GPCT_NO_PRESCALE_CLOCK_SRC_BITS = 0x0,
  NI_GPCT_PRESCALE_X2_CLOCK_SRC_BITS = 0x10000000,
  NI_GPCT_PRESCALE_X8_CLOCK_SRC_BITS = 0x20000000,
  NI_GPCT_INVERT_CLOCK_SRC_BIT = 0x80000000
};
#define NI_GPCT_SOURCE_PIN_CLOCK_SRC_BITS(x) (0x10 + (x))
#define NI_GPCT_RTSI_CLOCK_SRC_BITS(x) (0x18 + (x))
#define NI_GPCT_PFI_CLOCK_SRC_BITS(x) (0x20 + (x))
enum ni_gpct_gate_select {
  NI_GPCT_TIMESTAMP_MUX_GATE_SELECT = 0x0,
  NI_GPCT_AI_START2_GATE_SELECT = 0x12,
  NI_GPCT_PXI_STAR_TRIGGER_GATE_SELECT = 0x13,
  NI_GPCT_NEXT_OUT_GATE_SELECT = 0x14,
  NI_GPCT_AI_START1_GATE_SELECT = 0x1c,
  NI_GPCT_NEXT_SOURCE_GATE_SELECT = 0x1d,
  NI_GPCT_ANALOG_TRIGGER_OUT_GATE_SELECT = 0x1e,
  NI_GPCT_LOGIC_LOW_GATE_SELECT = 0x1f,
  NI_GPCT_SOURCE_PIN_i_GATE_SELECT = 0x100,
  NI_GPCT_GATE_PIN_i_GATE_SELECT = 0x101,
  NI_GPCT_UP_DOWN_PIN_i_GATE_SELECT = 0x201,
  NI_GPCT_SELECTED_GATE_GATE_SELECT = 0x21e,
  NI_GPCT_DISABLED_GATE_SELECT = 0x8000,
};
#define NI_GPCT_GATE_PIN_GATE_SELECT(x) (0x102 + (x))
#define NI_GPCT_RTSI_GATE_SELECT(x) NI_USUAL_RTSI_SELECT(x)
#define NI_GPCT_PFI_GATE_SELECT(x) NI_USUAL_PFI_SELECT(x)
#define NI_GPCT_UP_DOWN_PIN_GATE_SELECT(x) (0x202 + (x))
enum ni_gpct_other_index {
  NI_GPCT_SOURCE_ENCODER_A,
  NI_GPCT_SOURCE_ENCODER_B,
  NI_GPCT_SOURCE_ENCODER_Z
};
enum ni_gpct_other_select {
  NI_GPCT_DISABLED_OTHER_SELECT = 0x8000,
};
#define NI_GPCT_PFI_OTHER_SELECT(x) NI_USUAL_PFI_SELECT(x)
enum ni_gpct_arm_source {
  NI_GPCT_ARM_IMMEDIATE = 0x0,
  NI_GPCT_ARM_PAIRED_IMMEDIATE = 0x1,
  NI_GPCT_HW_ARM = 0x1000,
  NI_GPCT_ARM_UNKNOWN = NI_GPCT_HW_ARM,
};
enum ni_gpct_filter_select {
  NI_GPCT_FILTER_OFF = 0x0,
  NI_GPCT_FILTER_TIMEBASE_3_SYNC = 0x1,
  NI_GPCT_FILTER_100x_TIMEBASE_1 = 0x2,
  NI_GPCT_FILTER_20x_TIMEBASE_1 = 0x3,
  NI_GPCT_FILTER_10x_TIMEBASE_1 = 0x4,
  NI_GPCT_FILTER_2x_TIMEBASE_1 = 0x5,
  NI_GPCT_FILTER_2x_TIMEBASE_3 = 0x6
};
enum ni_pfi_filter_select {
  NI_PFI_FILTER_OFF = 0x0,
  NI_PFI_FILTER_125ns = 0x1,
  NI_PFI_FILTER_6425ns = 0x2,
  NI_PFI_FILTER_2550us = 0x3
};
enum ni_mio_clock_source {
  NI_MIO_INTERNAL_CLOCK = 0,
  NI_MIO_RTSI_CLOCK = 1,
  NI_MIO_PLL_PXI_STAR_TRIGGER_CLOCK = 2,
  NI_MIO_PLL_PXI10_CLOCK = 3,
  NI_MIO_PLL_RTSI0_CLOCK = 4
};
#define NI_MIO_PLL_RTSI_CLOCK(x) (NI_MIO_PLL_RTSI0_CLOCK + (x))
enum ni_rtsi_routing {
  NI_RTSI_OUTPUT_ADR_START1 = 0,
  NI_RTSI_OUTPUT_ADR_START2 = 1,
  NI_RTSI_OUTPUT_SCLKG = 2,
  NI_RTSI_OUTPUT_DACUPDN = 3,
  NI_RTSI_OUTPUT_DA_START1 = 4,
  NI_RTSI_OUTPUT_G_SRC0 = 5,
  NI_RTSI_OUTPUT_G_GATE0 = 6,
  NI_RTSI_OUTPUT_RGOUT0 = 7,
  NI_RTSI_OUTPUT_RTSI_BRD_0 = 8,
  NI_RTSI_OUTPUT_RTSI_OSC = 12
};
#define NI_RTSI_OUTPUT_RTSI_BRD(x) (NI_RTSI_OUTPUT_RTSI_BRD_0 + (x))
enum ni_pfi_routing {
  NI_PFI_OUTPUT_PFI_DEFAULT = 0,
  NI_PFI_OUTPUT_AI_START1 = 1,
  NI_PFI_OUTPUT_AI_START2 = 2,
  NI_PFI_OUTPUT_AI_CONVERT = 3,
  NI_PFI_OUTPUT_G_SRC1 = 4,
  NI_PFI_OUTPUT_G_GATE1 = 5,
  NI_PFI_OUTPUT_AO_UPDATE_N = 6,
  NI_PFI_OUTPUT_AO_START1 = 7,
  NI_PFI_OUTPUT_AI_START_PULSE = 8,
  NI_PFI_OUTPUT_G_SRC0 = 9,
  NI_PFI_OUTPUT_G_GATE0 = 10,
  NI_PFI_OUTPUT_EXT_STROBE = 11,
  NI_PFI_OUTPUT_AI_EXT_MUX_CLK = 12,
  NI_PFI_OUTPUT_GOUT0 = 13,
  NI_PFI_OUTPUT_GOUT1 = 14,
  NI_PFI_OUTPUT_FREQ_OUT = 15,
  NI_PFI_OUTPUT_PFI_DO = 16,
  NI_PFI_OUTPUT_I_ATRIG = 17,
  NI_PFI_OUTPUT_RTSI0 = 18,
  NI_PFI_OUTPUT_PXI_STAR_TRIGGER_IN = 26,
  NI_PFI_OUTPUT_SCXI_TRIG1 = 27,
  NI_PFI_OUTPUT_DIO_CHANGE_DETECT_RTSI = 28,
  NI_PFI_OUTPUT_CDI_SAMPLE = 29,
  NI_PFI_OUTPUT_CDO_UPDATE = 30
};
#define NI_PFI_OUTPUT_RTSI(x) (NI_PFI_OUTPUT_RTSI0 + (x))
enum ni_660x_pfi_routing {
  NI_660X_PFI_OUTPUT_COUNTER = 1,
  NI_660X_PFI_OUTPUT_DIO = 2,
};
#define NI_EXT_PFI(x) (NI_USUAL_PFI_SELECT(x) - 1)
#define NI_EXT_RTSI(x) (NI_USUAL_RTSI_SELECT(x) - 1)
enum ni_m_series_cdio_scan_begin_src {
  NI_CDIO_SCAN_BEGIN_SRC_GROUND = 0,
  NI_CDIO_SCAN_BEGIN_SRC_AI_START = 18,
  NI_CDIO_SCAN_BEGIN_SRC_AI_CONVERT = 19,
  NI_CDIO_SCAN_BEGIN_SRC_PXI_STAR_TRIGGER = 20,
  NI_CDIO_SCAN_BEGIN_SRC_G0_OUT = 28,
  NI_CDIO_SCAN_BEGIN_SRC_G1_OUT = 29,
  NI_CDIO_SCAN_BEGIN_SRC_ANALOG_TRIGGER = 30,
  NI_CDIO_SCAN_BEGIN_SRC_AO_UPDATE = 31,
  NI_CDIO_SCAN_BEGIN_SRC_FREQ_OUT = 32,
  NI_CDIO_SCAN_BEGIN_SRC_DIO_CHANGE_DETECT_IRQ = 33
};
#define NI_CDIO_SCAN_BEGIN_SRC_PFI(x) NI_USUAL_PFI_SELECT(x)
#define NI_CDIO_SCAN_BEGIN_SRC_RTSI(x) NI_USUAL_RTSI_SELECT(x)
#define NI_AO_SCAN_BEGIN_SRC_PFI(x) NI_USUAL_PFI_SELECT(x)
#define NI_AO_SCAN_BEGIN_SRC_RTSI(x) NI_USUAL_RTSI_SELECT(x)
enum ni_freq_out_clock_source_bits {
  NI_FREQ_OUT_TIMEBASE_1_DIV_2_CLOCK_SRC,
  NI_FREQ_OUT_TIMEBASE_2_CLOCK_SRC
};
enum amplc_dio_clock_source {
  AMPLC_DIO_CLK_CLKN,
  AMPLC_DIO_CLK_10MHZ,
  AMPLC_DIO_CLK_1MHZ,
  AMPLC_DIO_CLK_100KHZ,
  AMPLC_DIO_CLK_10KHZ,
  AMPLC_DIO_CLK_1KHZ,
  AMPLC_DIO_CLK_OUTNM1,
  AMPLC_DIO_CLK_EXT,
  AMPLC_DIO_CLK_VCC,
  AMPLC_DIO_CLK_GND,
  AMPLC_DIO_CLK_PAT_PRESENT,
  AMPLC_DIO_CLK_20MHZ
};
enum amplc_dio_ts_clock_src {
  AMPLC_DIO_TS_CLK_1GHZ,
  AMPLC_DIO_TS_CLK_1MHZ,
  AMPLC_DIO_TS_CLK_1KHZ
};
enum amplc_dio_gate_source {
  AMPLC_DIO_GAT_VCC,
  AMPLC_DIO_GAT_GND,
  AMPLC_DIO_GAT_GATN,
  AMPLC_DIO_GAT_NOUTNM2,
  AMPLC_DIO_GAT_RESERVED4,
  AMPLC_DIO_GAT_RESERVED5,
  AMPLC_DIO_GAT_RESERVED6,
  AMPLC_DIO_GAT_RESERVED7,
  AMPLC_DIO_GAT_NGATN = 6,
  AMPLC_DIO_GAT_OUTNM2,
  AMPLC_DIO_GAT_PAT_PRESENT,
  AMPLC_DIO_GAT_PAT_OCCURRED,
  AMPLC_DIO_GAT_PAT_GONE,
  AMPLC_DIO_GAT_NPAT_PRESENT,
  AMPLC_DIO_GAT_NPAT_OCCURRED,
  AMPLC_DIO_GAT_NPAT_GONE
};
enum ke_counter_clock_source {
  KE_CLK_20MHZ,
  KE_CLK_4MHZ,
  KE_CLK_EXT
};
#endif
