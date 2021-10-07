add_library(pac-nx2003-library INTERFACE)

target_sources(pac-nx2003-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003Thermistor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003BTN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003RGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003I2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003Thermistor.h"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003RGB.h"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003SPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003.h"
  "${CMAKE_CURRENT_LIST_DIR}/nx2003/src/NX2003BTN.h"
)

target_include_directories(pac-nx2003-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nx2003/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-nx2003-library INTERFACE
    arduino-compat
    pac-sd
)
