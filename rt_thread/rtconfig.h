#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RT-Thread Project Configuration */

/* RT-Thread Kernel */
#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_32
#define RT_THREAD_PRIORITY_MAX 32
#define RT_TICK_PER_SECOND 100
#define RT_USING_OVERFLOW_CHECK
#define RT_USING_HOOK
#define RT_USING_IDLE_HOOK
#define RT_IDEL_HOOK_LIST_SIZE 4
#define IDLE_THREAD_STACK_SIZE 512
#define RT_DEBUG

/* Inter-Thread communication */
#define RT_USING_SEMAPHORE
#define RT_USING_MUTEX
#define RT_USING_EVENT
#define RT_USING_MAILBOX
#define RT_USING_MESSAGEQUEUE
#define RT_USING_SIGNALS

/* Memory Management */
#define RT_USING_MEMPOOL
#define RT_USING_MEMHEAP
#define RT_USING_SMALL_MEM
#define RT_USING_HEAP

/* Kernel Device Object */
#define RT_USING_DEVICE
#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128
#define RT_CONSOLE_DEVICE_NAME "uart1"

/* RT-Thread Components */

/* C++ features */

/* Command shell */

/* Device virtual file system */

/* elm-chan's FatFs, Generic FAT Filesystem Module */

/* Device Drivers */

/* Network */

/* Using WiFi */

/* Using USB */

/* POSIX layer and C standard library */
#define RT_USING_MINILIBC

/* Socket abstraction layer */

/* light weight TCP/IP stack */

/* Modbus master and slave stack */

/* AT commands */

/* VBUS(Virtual Software BUS) */

/* Utilities */

/* ARM CMSIS */

/* RT-Thread online packages */

/* IoT - internet of things */

/* Wi-Fi */

/* Marvell WiFi */

/* Wiced WiFi */

/* IoT Cloud */

/* security packages */

/* language packages */

/* multimedia packages */

/* tools packages */

/* system packages */

/* peripheral libraries and drivers */

/* miscellaneous packages */

/* samples: kernel and components samples */

#endif
