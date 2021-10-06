add_library(max31850-onewire INTERFACE)

target_sources(max31850-onewire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire/OneWire.h"
)

target_include_directories(max31850-onewire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX31850_OneWire"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(max31850-onewire INTERFACE
    arduino-compat
)
