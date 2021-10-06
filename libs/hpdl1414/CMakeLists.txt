add_library(hpdl1414 INTERFACE)

target_sources(hpdl1414 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HPDL1414/src/HPDL1414.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HPDL1414/src/HPDL1414.h"
)

target_include_directories(hpdl1414 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HPDL1414/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hpdl1414 INTERFACE
    arduino-compat
)
