add_library(pac-dallastemperature INTERFACE)

target_sources(pac-dallastemperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library/DallasTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library/DallasTemperature.h"
)

target_include_directories(pac-dallastemperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dallastemperature INTERFACE
    arduino-compat
)
