/**
 ******************************************************************************
 * Header		: Redirect putchar / getchar
 ******************************************************************************
 * @file		: putchar_getchar_redirect.h
 * @brief		: Redirects the putchar and the getchar to use the HAL-library
 * @author		: N. Zoller (NZ)
 * @date		: 15.09.2023
 ******************************************************************************
 * @remark		: Last Modifications:
 * 				- 15.09.23	NZ	Mod: Split up in a source and header file
 ******************************************************************************
 * @attention
 * Source		: https://forum.digikey.com/t/easily-use-scanf-on-stm32/21103
 ******************************************************************************
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef PUTCHAR_GETCHAR_REDIRECT_H_
#define PUTCHAR_GETCHAR_REDIRECT_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* Private includes ----------------------------------------------------------*/
#include "stdio.h"

#include "main.h"
#include "usb_device.h"
#include "usbd_cdc_if.h"

/* Exported types ------------------------------------------------------------*/

/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/

/* Exported functions prototypes ---------------------------------------------*/

/* Private defines ----------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* PUTCHAR_GETCHAR_REDIRECT_H_ */

/**
 ******************************************************************************
 * End Header	: Interruption and Exception Handlers
 ******************************************************************************
 */
