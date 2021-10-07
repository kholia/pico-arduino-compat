add_library(pac-xlr8usb INTERFACE)

target_sources(pac-xlr8usb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src/XLR8USB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src/XLR8USB.h"
)

target_include_directories(pac-xlr8usb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8USB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8usb INTERFACE
    arduino-compat
)
