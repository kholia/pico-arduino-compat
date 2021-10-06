add_library(dimswitch INTERFACE)

target_sources(dimswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src/DimSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src/DimSwitch.h"
)

target_include_directories(dimswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dimswitch INTERFACE
    arduino-compat
)
