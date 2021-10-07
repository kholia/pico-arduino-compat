add_library(pac-blaeckserial INTERFACE)

target_sources(pac-blaeckserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src/BlaeckSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src/BlaeckSerial.h"
)

target_include_directories(pac-blaeckserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blaeckserial INTERFACE
    arduino-compat
)
