add_library(forecaster INTERFACE)

target_sources(forecaster INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Forecaster/src/Forecaster.h"
)

target_include_directories(forecaster INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Forecaster/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(forecaster INTERFACE
    arduino-compat
)
