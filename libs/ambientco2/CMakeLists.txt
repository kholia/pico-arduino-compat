add_library(ambientco2 INTERFACE)

target_sources(ambientco2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2/AmbientCO2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2/AmbientCO2.h"
)

target_include_directories(ambientco2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AmbientCO2"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ambientco2 INTERFACE
    arduino-compat
)
