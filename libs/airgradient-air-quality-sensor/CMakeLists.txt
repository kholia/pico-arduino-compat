add_library(airgradient-air-quality-sensor INTERFACE)

target_sources(airgradient-air-quality-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino/AirGradient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/AirGradient.h"
)

target_include_directories(airgradient-air-quality-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(airgradient-air-quality-sensor INTERFACE
    arduino-compat
)
