add_library(pac-dmxusb INTERFACE)

target_sources(pac-dmxusb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/dmxusb/src/DMXUSB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/dmxusb/src/DMXUSB.h"
)

target_include_directories(pac-dmxusb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/dmxusb/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmxusb INTERFACE
    arduino-compat
)
