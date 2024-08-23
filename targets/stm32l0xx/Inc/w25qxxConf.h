#ifndef _W25QXXCONFIG_H
#define _W25QXXCONFIG_H

#include "app/utils/delay.h"
#include "main.h"
#include "spi.h"

extern SPI_HandleTypeDef hspi2;

#define        _W25QXX_SPI           (hspi2)
#define        _W25QXX_CS_GPIO       (FnCS_GPIO_Port)
#define        _W25QXX_CS_PIN        (FnCS_Pin)
#define        _W25QXX_USE_FREERTOS  (0)
#define        _W25QXX_DEBUG         (1)

#define         W25qxx_Delay(delay)  delay_ms(delay)

#endif // _W25QXXCONFIG_H
