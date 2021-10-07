add_library(pac-soilhygrometer INTERFACE)

target_sources(pac-soilhygrometer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-SOIL_HYGROMETER/src/SoilHygrometer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-SOIL_HYGROMETER/src/SoilHygrometer.h"
)

target_include_directories(pac-soilhygrometer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-SOIL_HYGROMETER/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-soilhygrometer INTERFACE
    arduino-compat
)
