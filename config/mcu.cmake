# region MCU GLOBAL PROPERTY
set(L052_TARGET               sandbox_fw)

# region HAL
set(HAL_INCLUDE_DIRS
    ${L052_TARGET_PATH}/
    ${L052_TARGET_PATH}/Drivers/STM32L0xx_HAL_Driver/Inc
    ${L052_TARGET_PATH}/Drivers/CMSIS/Device/ST/STM32L0xx/Include
    ${L052_TARGET_PATH}/Drivers/CMSIS/Include
    ${L052_TARGET_PATH}/Inc
)
# endregion

# Put here your symbols (preprocessor defines), one in each line
# Encapsulate them with double quotes for safety purpose
set(DEFINES
    $<$<CONFIG:DEBUG>:"DEBUG">
    $<$<CONFIG:RELASE>:"NDEBUG">
    "USE_HAL_DRIVER"
    "STM32L052xx"
)

set(CPU_PARAMETERS -mthumb
    # This needs attention to properly set for used MCU
    -mcpu=cortex-m0plus
    -mfloat-abi=soft
)

set(ARM_NONE_EABI_FLAGS
    ${CPU_PARAMETERS}
    # -flto
    -Wall
    -Wextra
    -Wpedantic
    -Wno-unused-parameter
    -fdata-sections
    -ffunction-sections
    -fdiagnostics-color=always
    # Full debug configuration
    $<$<CONFIG:DEBUG>: -Og -g3 -ggdb>
    # Release
    $<$<CONFIG:RELEASE>:-Os -s>
    # Release with DEBUG
    $<$<CONFIG:RelWithDebInfo>:-Os -g3 -ggdb>
)

# Set linker script
set(L052_LINKER_SCRIPT ${PROJECT_SOURCE_DIR}/targets/stm32l0xx/STM32L052C8Tx_FLASH.ld)

set(L052_LINKER_OPTION
    -T${L052_LINKER_SCRIPT}
    ${CPU_PARAMETERS}
    -Wl,-Map=${CMAKE_PROJECT_NAME}.map
    -specs=nano.specs
    -specs=nosys.specs
    # -u _printf_float                # STDIO float formatting support
    -Wl,--start-group
    -fno-exceptions
    -fno-rtti
    -Wl,--end-group
    -Wl,--gc-sections # removed unused functions
    -Wl,--print-memory-usage
)
# endregion