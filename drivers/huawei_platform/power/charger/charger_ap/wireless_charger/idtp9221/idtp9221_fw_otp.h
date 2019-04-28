#ifndef _IDT9221_FW_OTP_H
#define _IDT9221_FW_OTP_H

#include <idtp9221_fw_otp_0304.h>
#include <idtp9221_fw_otp_0307.h>
#include <idtp9221_fw_otp_030b.h>
#include <idtp9221_fw_otp_030f.h>

struct fw_otp_info {
	const char *otp_name;
	const unsigned char *otp_arr;
	const unsigned int otp_size;
};
const struct fw_otp_info otp_info[] = {
	{
		.otp_name = IDT9221_OTP_FW_VERSION_0304H,
		.otp_arr  = idt_fw_otp_0304h,
		.otp_size = ARRAY_SIZE(idt_fw_otp_0304h),
	},
	{
		.otp_name = IDT9221_OTP_FW_VERSION_0307H,
		.otp_arr  = idt_fw_otp_0307h,
		.otp_size = ARRAY_SIZE(idt_fw_otp_0307h),
	},
	{
		.otp_name = IDT9221_OTP_FW_VERSION_030BH,
		.otp_arr  = idt_fw_otp_030bh,
		.otp_size = ARRAY_SIZE(idt_fw_otp_030bh),
	},
	{
		.otp_name = IDT9221_OTP_FW_VERSION_030FH,
		.otp_arr  = idt_fw_otp_030fh,
		.otp_size = ARRAY_SIZE(idt_fw_otp_030fh),
	},
};

const unsigned char idt_bootloader_data[] = {// 512 byte
  0x00, 0x04, 0x00, 0x20, 0x35, 0x01, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xFE, 0xE7, 0x00, 0x00, 0x80, 0x00, 0x00, 0xE0, 0x00, 0xBF, 0x40, 0x1E, 0xFC, 0xD2, 0x70, 0x47,
  0x00, 0xB5, 0x60, 0x4A, 0x60, 0x4B, 0x01, 0x70, 0x01, 0x20, 0xFF, 0xF7, 0xF3, 0xFF, 0x52, 0x1E,
  0x02, 0xD0, 0x18, 0x8B, 0x00, 0x06, 0xF7, 0xD4, 0x00, 0xBD, 0xF7, 0xB5, 0x05, 0x46, 0x5B, 0x48,
  0x81, 0xB0, 0x00, 0x21, 0x94, 0x46, 0x81, 0x81, 0x57, 0x48, 0x31, 0x21, 0x01, 0x80, 0x04, 0x21,
  0x81, 0x80, 0x06, 0x21, 0x01, 0x82, 0x28, 0x20, 0xFF, 0xF7, 0xDC, 0xFF, 0x00, 0x24, 0x0D, 0xE0,
  0x02, 0x99, 0x28, 0x5D, 0x09, 0x5D, 0x02, 0x46, 0x8A, 0x43, 0x01, 0xD0, 0x10, 0x20, 0x3F, 0xE0,
  0x81, 0x43, 0x02, 0xD0, 0x28, 0x19, 0xFF, 0xF7, 0xD3, 0xFF, 0x64, 0x1C, 0x64, 0x45, 0xEF, 0xD3,
  0x49, 0x48, 0x36, 0x21, 0x01, 0x82, 0x00, 0x24, 0x2F, 0xE0, 0x02, 0x98, 0x00, 0x27, 0x06, 0x5D,
  0x28, 0x19, 0x00, 0x90, 0x44, 0x4A, 0x08, 0x20, 0x90, 0x80, 0x02, 0x20, 0xFF, 0xF7, 0xBA, 0xFF,
  0x28, 0x5D, 0x33, 0x46, 0x83, 0x43, 0x16, 0xD0, 0x3F, 0x49, 0x04, 0x20, 0x88, 0x80, 0x02, 0x20,
  0xFF, 0xF7, 0xB0, 0xFF, 0x19, 0x46, 0x00, 0x98, 0xFF, 0xF7, 0xB2, 0xFF, 0x3A, 0x49, 0x0F, 0x20,
  0x88, 0x80, 0x02, 0x20, 0xFF, 0xF7, 0xA6, 0xFF, 0x28, 0x5D, 0xB0, 0x42, 0x03, 0xD0, 0x7F, 0x1C,
  0x0A, 0x2F, 0xDF, 0xD3, 0x01, 0xE0, 0x0A, 0x2F, 0x06, 0xD3, 0x35, 0x48, 0x29, 0x19, 0x41, 0x80,
  0x29, 0x5D, 0xC1, 0x80, 0x04, 0x20, 0x03, 0xE0, 0x64, 0x1C, 0x64, 0x45, 0xCD, 0xD3, 0x02, 0x20,
  0x2D, 0x49, 0x11, 0x22, 0x0A, 0x80, 0x04, 0x22, 0x8A, 0x80, 0x2C, 0x49, 0xFF, 0x22, 0x8A, 0x81,
  0x04, 0xB0, 0xF0, 0xBD, 0x2C, 0x49, 0x2B, 0x48, 0x08, 0x60, 0x2C, 0x48, 0x00, 0x23, 0x83, 0x81,
  0x2A, 0x49, 0x20, 0x39, 0x8B, 0x83, 0x03, 0x80, 0x24, 0x48, 0x5A, 0x21, 0x40, 0x38, 0x01, 0x80,
  0x81, 0x15, 0x81, 0x80, 0x0B, 0x21, 0x01, 0x81, 0x25, 0x49, 0x81, 0x81, 0x14, 0x20, 0xFF, 0xF7,
  0x71, 0xFF, 0x24, 0x4A, 0x01, 0x20, 0x10, 0x80, 0x02, 0x20, 0xFF, 0xF7, 0x6B, 0xFF, 0x8D, 0x20,
  0x10, 0x80, 0x93, 0x80, 0xFF, 0x20, 0x90, 0x82, 0x03, 0x20, 0x00, 0x02, 0x10, 0x82, 0xFC, 0x20,
  0x90, 0x83, 0x1C, 0x49, 0x95, 0x20, 0x20, 0x31, 0x08, 0x80, 0x15, 0x4D, 0x2B, 0x80, 0x28, 0x88,
  0x2C, 0x46, 0x01, 0x28, 0xFB, 0xD1, 0x61, 0x88, 0x80, 0x03, 0xA2, 0x88, 0x08, 0x18, 0x51, 0x18,
  0x8B, 0xB2, 0x00, 0x21, 0x04, 0xE0, 0x0E, 0x19, 0x36, 0x7A, 0xF3, 0x18, 0x9B, 0xB2, 0x49, 0x1C,
  0x8A, 0x42, 0xF8, 0xD8, 0xE1, 0x88, 0x99, 0x42, 0x01, 0xD0, 0x08, 0x20, 0x08, 0xE0, 0x00, 0x2A,
  0x05, 0xD0, 0x07, 0x49, 0x08, 0x31, 0xFF, 0xF7, 0x50, 0xFF, 0x20, 0x80, 0xDF, 0xE7, 0x02, 0x20,
  0x28, 0x80, 0xDC, 0xE7, 0x10, 0x27, 0x00, 0x00, 0x00, 0x5C, 0x00, 0x40, 0x40, 0x30, 0x00, 0x40,
  0x00, 0x04, 0x00, 0x20, 0xFF, 0x0F, 0x00, 0x00, 0x80, 0xE1, 0x00, 0xE0, 0x20, 0x6C, 0x00, 0x40,
  0x04, 0x1D, 0x00, 0x00, 0x00, 0x64, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

#endif
