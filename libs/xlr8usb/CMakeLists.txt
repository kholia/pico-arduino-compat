add_library(xlr8usb INTERFACE)

target_sources(xlr8usb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src/XLR8USB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src/XLR8USB.h"
)

target_include_directories(xlr8usb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xlr8usb INTERFACE
    arduino-compat
)
