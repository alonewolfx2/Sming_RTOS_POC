#ifndef __USER_CONFIG_H__
#define __USER_CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

	// UART config
	#define SERIAL_BAUD_RATE 115200

	// ESP SDK config
	#define LWIP_OPEN_SRC
	#define USE_US_TIMER

	// Default types
	#define __CORRECT_ISO_CPP_STDLIB_H_PROTO
	#include <limits.h>

	// Remove buggy espconn
	#define _NO_ESPCON_
	// Remove rtos built in spiffs
	#define __ESP_SPIFFS_H__

	// Updated, compatible version of c_types.h
	// Just removed types declared in <stdint.h>
//	#include <c_types_compatible.h>

	// System API declarations
	#include "system/esp_systemapi.h"

	// C++ Support
	//#include <esp_cplusplus.h>
	// Extended string conversion for compatibility
//	#include "stringconversion.h"
	// Network base API
	//#include <lwip_includes.h>

	// Beta boards
	#define BOARD_ESP01

#ifdef __cplusplus
}
#endif

#endif
