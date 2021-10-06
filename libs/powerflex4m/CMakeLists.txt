add_library(powerflex4m INTERFACE)

target_sources(powerflex4m INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src/PowerFlex4m.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src/PowerFlex4m.h"
)

target_include_directories(powerflex4m INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PowerFlex4m/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(powerflex4m INTERFACE
    arduino-compat
)
