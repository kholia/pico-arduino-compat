add_library(pac-jm_pcf8574 INTERFACE)

target_sources(pac-jm_pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_PCF8574/src/jm_PCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_PCF8574/src/jm_PCF8574.h"
)

target_include_directories(pac-jm_pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_PCF8574/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jm_pcf8574 INTERFACE
    arduino-compat
)
