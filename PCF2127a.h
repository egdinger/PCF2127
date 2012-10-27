//Copyright Eric Dinger October 26 2012
//This is a driver for the NXP rtc 2127a, and maybe the 2129a

//Registers - names match those in the datasheet
#define Control_1       0x00
#define Control_2       0x01
#define Control_3       0x02
//Time and date registers
#define Seconds         0x03
#define Minutes         0x04
#define Hours           0x05
#define Days            0x06
#define Weekdays        0x07
#define Months          0x08
#define Years           0x09
//Alarm registers
#define Second_alarm    0x0A
#define Minute_alarm    0x0B
#define Hour_alarm      0x0C
#define Day_alarm       0x0D
#define Weekday_alarm   0x0E
//CLKOUT control register
#define CLKOUT_ctl      0x0F
//Watchdog Registers
#define Watchdg_tim_ctl 0x10
#define Watchdg_tim_val 0x11
//Timestamp registers
#define Timestp_ctl     0x12
#define Sec_timestp     0x13
#define Min_timestp     0x14
#define Hour_timestp    0x15
#define Day_timestp     0x16
#define Mon_timestp     0x17
#define Year_timestp    0x18
//Aging offset register
#define Aging_offset    0x19
//Ram register 2127 only?
#define RAM_addr_MSB    0x1A
#define RAM_addr_LSB    0x1B
#define RAM_wrt_cmd     0x1C
#define RAM_rd_cmd      0x1D

/*
 * Checks if the oscillator stop flag has been set
 * Returns a 1 if the flag is set
 */
