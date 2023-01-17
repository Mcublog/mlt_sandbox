/**
 * @file delay.c
 * @author Viacheslav (Viacheslav@mcublog.ru)
 * @brief Delay ms desktop version
 * @version 0.1
 * @date 2023-01-17
 *
 * @copyright Viacheslav Copyright (c) 2023
 *
 */
#include "app/utils/delay.h"

#include <unistd.h>

/**
 * @brief Delay ms
 *
 * @param ms
 */
void delay_ms(uint32_t ms)
{
    usleep(ms * 1000);
}
