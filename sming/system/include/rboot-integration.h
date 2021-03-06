#ifndef __RBOOT_INTEGRATION_H__
#define __RBOOT_INTEGRATION_H__

// prevent sming user_config.h being included
#define __USER_CONFIG_H__

// mark functions that need to be in iram
// (alreayd defined in the rtos sdk)
//#define IRAM_ATTR __attribute__((section(".iram.text")))

// missing prototypes for sdk functions
#include <esp_systemapi.h>
#include <freertos/projdefs.h>
#include <freertos/portable.h>

#endif /* __RBOOT_INTEGRATION_H__ */
