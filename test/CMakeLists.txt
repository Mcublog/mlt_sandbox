include(${PROJECT_SOURCE_DIR}/config/common.cmake)
include(${PROJECT_SOURCE_DIR}/config/desktop.cmake)

set(CMAKE_C_COMPILER ${GCC_DESKTOP})
# Common sources
file(GLOB_RECURSE TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
    ${APP_DIR}/debug/*.c
 )

set(COMMON_TEST_TARGET common_test)
add_executable(${COMMON_TEST_TARGET} ${TEST_SOURCES})

# Include paths
target_include_directories(${COMMON_TEST_TARGET} PRIVATE ${APP_DIRS} ${DESKTOP_INCLUDE_DIR})

# Added test
add_test(NAME ${COMMON_TEST_TARGET}
         COMMAND ${COMMON_TEST_TARGET})
