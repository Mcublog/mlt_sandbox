set(APP     app)
set(APP_FW  app_fw)
# region GLOBAL PROPERTIES
set(L052_TARGET_PATH           ${PROJECT_SOURCE_DIR}/targets/stm32l0xx)
set(DESKTOP_TARGET_PATH        ${PROJECT_SOURCE_DIR}/targets/desktop)

set(APP_DIR     ${PROJECT_SOURCE_DIR}/app)
set(DEBUG_DIR   ${APP_DIR}/debug)
set(UTILS_DIR   ${APP_DIR}/utils)
set(IO_DIR      ${APP_DIR}/io)
set(LIBS_DIR    ${PROJECT_SOURCE_DIR}/libs)

set(APP_DIRS
    ${PROJECT_SOURCE_DIR}
    ${APP_DIR}
    ${DEBUG_DIR}
    ${UTILS_DIR}
    ${IO_DIR}
)

# region RTT
set(RTT_VERSION SEGGER_RTT_V762c)
set(RTT_DIR ${LIBS_DIR}/${RTT_VERSION})
set(RTT_INCLUDE_DIRS
    ${RTT_DIR}/Config
    ${RTT_DIR}/RTT)
# Add sources
file(GLOB_RECURSE RTT_SOURCES
    ${RTT_DIR}/RTT/*.c
    ${RTT_DIR}/RTT/*.S
    ${RTT_DIR}/Syscalls/SEGGER_RTT_Syscalls_GCC.c
)
# endregion

set(COMMON_TYPES_TARGET common_types_test)
set(TEST_DIR            ${PROJECT_SOURCE_DIR}/test)

set(GCC_EMBEDDED    arm-none-eabi-gcc)
set(GCC_DESKTOP     gcc)