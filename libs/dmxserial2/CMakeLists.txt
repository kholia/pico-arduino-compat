add_library(pac-dmxserial2 INTERFACE)

target_sources(pac-dmxserial2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial2/src/DMXSerial2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial2/src/rdm.h"
  "${CMAKE_CURRENT_LIST_DIR}/DMXSerial2/src/DMXSerial2.h"
)

target_include_directories(pac-dmxserial2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DMXSerial2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dmxserial2 INTERFACE
    arduino-compat
)
