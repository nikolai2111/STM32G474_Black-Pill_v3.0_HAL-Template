/**
 ******************************************************************************
 * Source		: Redirect putchar / getchar
 ******************************************************************************
 * @file		: putchar_getchar_redirect.c
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

/* Includes -----------------------------------------------------------------*/
#include "putchar_getchar_redirect.h"

/* Private typedef ----------------------------------------------------------*/

/* Private define -----------------------------------------------------------*/
#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#define GETCHAR_PROTOTYPE int __io_getchar(void)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#define GETCHAR_PROTOTYPE int fgetc(FILE *f)
#endif

/* Private macro ------------------------------------------------------------*/

/* Private variables --------------------------------------------------------*/

/* Private function prototypes ----------------------------------------------*/

/* External functions --------------------------------------------------------*/

/* Private user code --------------------------------------------------------*/

/**
 * @brief		Redirect putchar
 *****************************************************************************/
PUTCHAR_PROTOTYPE
{
	static uint8_t rc = USBD_OK;

	do
	{
		rc = CDC_Transmit_FS((uint8_t*) &ch, 1);
	} while (USBD_BUSY == rc);

	if (USBD_FAIL == rc)
	{
		/* NOTE: Should never reach here. */
		Error_Handler();
		return 0;
	}

	return ch;
}

/**
 * @brief		Redirect getchar
 *****************************************************************************/
GETCHAR_PROTOTYPE
{
	uint8_t ch = 0;
	/* Implement here */
	return ch;
}

/**
 ******************************************************************************
 * End Source	: Redirect putchar / getchar
 ******************************************************************************
 */
