/**
 * @file application.c
 * @author Viacheslav (Viacheslav@mcublog.ru)
 * @brief
 * @version 0.1
 * @date 2023-01-15
 *
 * @copyright Viacheslav Copyright (c) 2023
 *
 */
#include "app/application.h"
#include "app/version.h"
#include "app/utils/delay.h"
//>>---------------------- Log control
#define LOG_MODULE_NAME app
#if defined(NDEBUG)
#define LOG_MODULE_LEVEL (0)
#else
#define LOG_MODULE_LEVEL (3)
#endif
#include "log_libs.h"
//<<----------------------

/**
 * @brief Application entry point
 *
 */
void application_run(void)
{
    LOG_INFO("v%s run", FW_VERSION);

    while(1)
    {
        LOG_INFO("Tick...");
        delay_ms(1000);
    }
}