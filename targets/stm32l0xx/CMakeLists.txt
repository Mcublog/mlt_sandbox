include(${PROJECT_SOURCE_DIR}/config/common.cmake)
include(${PROJECT_SOURCE_DIR}/config/mcu.cmake)

# Add sources
file(GLOB_RECURSE HAL_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
    ${CMAKE_CURRENT_SOURCE_DIR}/*.s
)

file(GLOB_RECURSE APP_SOURCES ${APP_DIR}/*.c)

# Build lib
add_executable(${L052_TARGET} ${HAL_SOURCES} ${APP_SOURCES} ${RTT_SOURCES})

# Include paths
target_include_directories(${L052_TARGET} PRIVATE ${HAL_INCLUDE_DIRS} ${APP_DIRS} ${RTT_INCLUDE_DIRS})

# Project symbols
target_compile_definitions(${L052_TARGET} PRIVATE ${DEFINES})

# Compiler options
target_compile_options(${L052_TARGET} PRIVATE ${ARM_NONE_EABI_FLAGS})

# Linker options
target_link_options(${L052_TARGET} PRIVATE ${L052_LINKER_OPTION})

# # Convert output to hex and binary
add_custom_command(TARGET ${L052_TARGET}
    POST_BUILD
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMAND ${CMAKE_OBJCOPY} ARGS -O ihex -I elf32-littlearm ${L052_TARGET} ${L052_TARGET}.hex
    COMMAND ${CMAKE_OBJCOPY} ARGS -O binary -I elf32-littlearm ${L052_TARGET} ${L052_TARGET}.bin
)