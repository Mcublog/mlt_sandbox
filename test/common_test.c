/**
 * @file common_test.c
 * @author Viacheslav (Viacheslav@mcublog.ru)
 * @brief Common test example
 * @version 0.1
 * @date 2023-01-18
 *
 * @copyright Viacheslav Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdbool.h>

//>>---------------------- Log control
#define LOG_MODULE_NAME common_types_test
#if defined(NDEBUG)
#define LOG_MODULE_LEVEL (0)
#else
#define LOG_MODULE_LEVEL (4)
#endif
#include "log_libs.h"
//<<----------------------

int main()
{
    if (false != 0)
    {
        LOG_ERROR("logical error");
        exit(1);
    }
    LOG_DEBUG("Test ok");
}
