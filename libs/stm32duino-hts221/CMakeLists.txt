add_library(pac-stm32duino-hts221 INTERFACE)

target_sources(pac-stm32duino-hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HTS221/src/HTS221Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HTS221/src/HTS221_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/HTS221/src/HTS221Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/HTS221/src/HTS221_Driver.h"
)

target_include_directories(pac-stm32duino-hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HTS221/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-hts221 INTERFACE
    arduino-compat
)
