add_library(dimmercontrol INTERFACE)

target_sources(dimmercontrol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DimmerControl/src/DimmerControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DimmerControl/src/DimmerControl.h"
)

target_include_directories(dimmercontrol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DimmerControl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dimmercontrol INTERFACE
    arduino-compat
)
