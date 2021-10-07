add_library(pac-dimswitch INTERFACE)

target_sources(pac-dimswitch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src/DimSwitch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src/DimSwitch.h"
)

target_include_directories(pac-dimswitch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DimSwitch/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dimswitch INTERFACE
    arduino-compat
)
