add_library(blaeckserial INTERFACE)

target_sources(blaeckserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src/BlaeckSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src/BlaeckSerial.h"
)

target_include_directories(blaeckserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlaeckSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blaeckserial INTERFACE
    arduino-compat
)
