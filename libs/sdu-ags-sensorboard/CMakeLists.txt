add_library(sdu-ags-sensorboard INTERFACE)

target_sources(sdu-ags-sensorboard INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/DallasTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/sdu_ags_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/OneWire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/sdu_ags_library.h"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/DallasTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/OneWire.h"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/util/OneWire_direct_gpio.h"
  "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS/util/OneWire_direct_regtype.h"
)

target_include_directories(sdu-ags-sensorboard INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDU_AGS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sdu-ags-sensorboard INTERFACE
    arduino-compat
)
