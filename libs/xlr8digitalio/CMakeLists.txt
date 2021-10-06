add_library(xlr8digitalio INTERFACE)

target_sources(xlr8digitalio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src/XLR8DigitalIOAddr.h"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src/XLR8DigitalIO.h"
)

target_include_directories(xlr8digitalio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8digitalio INTERFACE
    arduino-compat
)
