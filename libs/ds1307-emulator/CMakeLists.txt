add_library(ds1307-emulator INTERFACE)

target_sources(ds1307-emulator INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/DS1307Emulator.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/utility/rtc_hal.c"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/utility/timers.c"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/DS1307Emulator.h"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/utility/timers.h"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src/utility/rtc_hal.h"
)

target_include_directories(ds1307-emulator INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1307-Emulator-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1307-emulator INTERFACE
    arduino-compat
)
