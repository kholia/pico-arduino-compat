add_library(pac-hd44780 INTERFACE)

target_sources(pac-hd44780 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_I2Cexp.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_HC1627_I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_I2Clcd.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_NTCUUserial.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_NTCU165ECPB.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_pinIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/hd44780/hd44780ioClass/hd44780_NTCU20025ECPB_pinIO.h"
)

target_include_directories(pac-hd44780 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hd44780"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hd44780 INTERFACE
    arduino-compat
)
