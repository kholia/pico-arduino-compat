add_library(thermal-printer-library INTERFACE)

target_sources(thermal-printer-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/src/Thermal_Printer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/src/fonts.c"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/src/Thermal_Printer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/print_photo/eagle_576.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/print_photo/dog_384.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/m5stickc_telegram_bot/Open_Sans_Bold_22.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/m5stickc_telegram_bot/Open_Sans_Bold_32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/custom_font/OpenSansBold64.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/custom_font/FreeSerif12pt7b.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/telegram_bot/Open_Sans_Bold_22.h"
  "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/examples/telegram_bot/Open_Sans_Bold_32.h"
)

target_include_directories(thermal-printer-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Thermal_Printer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thermal-printer-library INTERFACE
    arduino-compat
)
