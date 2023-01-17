include(${PROJECT_SOURCE_DIR}/config/common.cmake)
include(${PROJECT_SOURCE_DIR}/config/desktop.cmake)

# Add sources
file(GLOB_RECURSE DESKTOP_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/*.c
)

file(GLOB_RECURSE APP_SOURCES ${APP_DIR}/*.c)

# Build lib
add_executable(${DESKTOP_TARGET} ${DESKTOP_SOURCES} ${APP_SOURCES})

# Include paths
target_include_directories(${DESKTOP_TARGET} PRIVATE ${APP_DIRS})
