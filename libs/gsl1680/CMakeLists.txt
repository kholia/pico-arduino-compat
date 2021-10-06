add_library(gsl1680 INTERFACE)

target_sources(gsl1680 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GSL1680/GSL1680.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GSL1680/GSL1680.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSL1680/gslfw.h"
  "${CMAKE_CURRENT_LIST_DIR}/GSL1680/gslX680firmware.h"
)

target_include_directories(gsl1680 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GSL1680"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gsl1680 INTERFACE
    arduino-compat
)
