add_library(dallastemperature INTERFACE)

target_sources(dallastemperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library/DallasTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library/DallasTemperature.h"
)

target_include_directories(dallastemperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Temperature-Control-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dallastemperature INTERFACE
    arduino-compat
)
