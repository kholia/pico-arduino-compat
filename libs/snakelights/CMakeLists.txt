add_library(snakelights INTERFACE)

target_sources(snakelights INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/snakelights/src/SnakeLights.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/snakelights/src/SnakeLights.h"
)

target_include_directories(snakelights INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/snakelights/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(snakelights INTERFACE
    arduino-compat
)
