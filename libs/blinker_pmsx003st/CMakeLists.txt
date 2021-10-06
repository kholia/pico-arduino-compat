add_library(blinker_pmsx003st INTERFACE)

target_sources(blinker_pmsx003st INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Blinker_PMSX003ST/src/BLINKER_PMSX003ST.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Blinker_PMSX003ST/src/BLINKER_PMSX003ST.h"
)

target_include_directories(blinker_pmsx003st INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Blinker_PMSX003ST/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blinker_pmsx003st INTERFACE
    arduino-compat
)
