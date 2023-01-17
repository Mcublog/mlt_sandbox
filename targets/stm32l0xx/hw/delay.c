/**
 * @file delay.c
 * @author Viacheslav (Viacheslav@mcublog.ru)
 * @brief HW delay implementation
 * @version 0.1
 * @date 2023-01-17
 *
 * @copyright Viacheslav Copyright (c) 2023
 *
 */
#include "app/utils/delay.h"
#include "main.h"
/**
 * @brief ms delay
 *
 * @param ms
 */
void delay_ms(uint32_t ms)
{
    HAL_Delay(ms);
}
