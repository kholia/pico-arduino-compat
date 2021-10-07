add_library(pac-max31850-onewire INTERFACE)

target_sources(pac-max31850-onewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire/OneWire.h"
)

target_include_directories(pac-max31850-onewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max31850-onewire INTERFACE
    arduino-compat
)
