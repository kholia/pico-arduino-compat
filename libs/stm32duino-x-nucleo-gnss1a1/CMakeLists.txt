add_library(stm32duino-x-nucleo-gnss1a1 INTERFACE)

target_sources(stm32duino-x-nucleo-gnss1a1 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src/teseo_liv3f_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src/NMEA_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src/gnss_parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src/teseo.h"
  "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src/teseo_liv3f_class.h"
)

target_include_directories(stm32duino-x-nucleo-gnss1a1 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/X-NUCLEO-GNSS1A1/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-x-nucleo-gnss1a1 INTERFACE
    arduino-compat
)
