add_library(pololuhd44780 INTERFACE)

target_sources(pololuhd44780 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pololu-hd44780-arduino/PololuHD44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pololu-hd44780-arduino/PololuHD44780.h"
)

target_include_directories(pololuhd44780 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pololu-hd44780-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pololuhd44780 INTERFACE
    arduino-compat
)
