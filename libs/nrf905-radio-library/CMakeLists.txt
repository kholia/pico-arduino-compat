add_library(nrf905-radio-library INTERFACE)

target_sources(nrf905-radio-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nRF905-arduino/src/nRF905.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nRF905-arduino/src/nRF905.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF905-arduino/src/nRF905_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/nRF905-arduino/src/nRF905_defs.h"
)

target_include_directories(nrf905-radio-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nRF905-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrf905-radio-library INTERFACE
    arduino-compat
)
