add_library(simplemeteocalc INTERFACE)

target_sources(simplemeteocalc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMeteoCalc/src/SimpleMeteoCalc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleMeteoCalc/src/SimpleMeteoCalc.h"
)

target_include_directories(simplemeteocalc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleMeteoCalc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simplemeteocalc INTERFACE
    arduino-compat
)
