add_library(pac-xlr8digitalio INTERFACE)

target_sources(pac-xlr8digitalio INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src/XLR8DigitalIOAddr.h"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src/XLR8DigitalIO.h"
)

target_include_directories(pac-xlr8digitalio INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8DigitalIO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8digitalio INTERFACE
    arduino-compat
)
