add_library(pac-ambientco2 INTERFACE)

target_sources(pac-ambientco2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2/AmbientCO2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2/AmbientCO2.h"
)

target_include_directories(pac-ambientco2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ambientco2 INTERFACE
    arduino-compat
)
