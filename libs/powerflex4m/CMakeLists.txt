add_library(pac-powerflex4m INTERFACE)

target_sources(pac-powerflex4m INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src/PowerFlex4m.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src/PowerFlex4m.h"
)

target_include_directories(pac-powerflex4m INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-powerflex4m INTERFACE
    arduino-compat
)
