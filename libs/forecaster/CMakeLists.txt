add_library(pac-forecaster INTERFACE)

target_sources(pac-forecaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Forecaster/src/Forecaster.h"
)

target_include_directories(pac-forecaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Forecaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-forecaster INTERFACE
    arduino-compat
)
