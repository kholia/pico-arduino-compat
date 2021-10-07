add_library(pac-stm32duino-stts751 INTERFACE)

target_sources(pac-stm32duino-stts751 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STTS751/src/STTS751Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STTS751/src/stts751_reg.c"
  "${CMAKE_CURRENT_LIST_DIR}/STTS751/src/stts751_reg.h"
  "${CMAKE_CURRENT_LIST_DIR}/STTS751/src/STTS751Sensor.h"
)

target_include_directories(pac-stm32duino-stts751 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STTS751/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-stts751 INTERFACE
    arduino-compat
)
