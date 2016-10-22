
#ifndef __DAP_CONFIG_H__
#define __DAP_CONFIG_H__

#define __NVIC_PRIO_BITS 	(4)

typedef enum IRQn_
{
    SysTick_IRQn = -1
} IRQn_Type;

//./source/hic_hal/atmel/sam3u2c/sam3u2c.h
#include "core_cm4.h"

#include "mtk_types.h"


#define DAP_SWD                 1               ///< SWD Mode:  1 = available, 0 = not available
#define DAP_JTAG                1               ///< JTAG Mode: 1 = available


/* common between SWD and JTAG */
#define PIN_SWCLK_TCK_SET()	do { } while (0)
#define PIN_SWCLK_TCK_CLR()	do { } while (0)
#define PIN_SWDIO_TMS_SET()	do { } while (0)
#define PIN_SWDIO_TMS_CLR()	do { } while (0)

#if DAP_SWD
#define PIN_SWDIO_OUT(bit)	do { } while (0)
#define PIN_SWDIO_IN()		(1)
#define PIN_SWDIO_OUT_ENABLE()	do { } while (0)
#define PIN_SWDIO_OUT_DISABLE()	do { } while (0)
#endif

#if DAP_JTAG
#define DAP_JTAG_DEV_CNT	1

#define PIN_TDI_OUT(b)		do { } while (0)
#define PIN_TDO_IN()		(1)
#endif

/* DAP */

#define DAP_DEFAULT_PORT        1 ///< Default JTAG/SWJ Port Mode: 1 = SWD, 2 = JTAG
#define DAP_PACKET_SIZE		(64)
#define DAP_PACKET_COUNT	(1)
#define DAP_DEFAULT_SWJ_CLOCK	(1000000)
#define DAP_SETUP()		do { } while (0)

/* port */

#define PORT_SWD_SETUP()	do { } while (0)
#define PORT_JTAG_SETUP()	do { } while (0)
#define PORT_OFF()		do { } while (0)

/* CPU */

#define CPU_CLOCK		(192*1024*1024)
#define IO_PORT_WRITE_CYCLES	(1024)

/* LED */

#define LED_CONNECTED_OUT(b)	do { } while (0)
#define LED_RUNNING_OUT(b)	do { } while (0)

#define RESET_TARGET()		(1)

#define PIN_TDI_IN()		(0)
#define PIN_TDI_OUT(b)		do { } while (0)
#define PIN_nRESET_OUT(b)	do { } while (0)
#define PIN_nTRST_IN()		(0)
#define PIN_nRESET_IN()		(0)
#define PIN_nTRST_OUT(b)	do { } while (0)
#define PIN_SWCLK_TCK_IN()	(0)
#define PIN_SWDIO_TMS_IN()	(0)



#endif /* __DAP_CONFIG_H__ */

