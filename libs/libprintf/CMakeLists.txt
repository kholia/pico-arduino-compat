add_library(pac-libprintf INTERFACE)

target_sources(pac-libprintf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/sketch_cpp/override_putchar.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/sketch_cpp/default_to_serial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/sketch_cpp/specify_print_class.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/src/LibPrintf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/printf/printf.c"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/printf/printf.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/extras/test/LibPrintf.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/src/LibPrintf.h"
)

target_include_directories(pac-libprintf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-printf/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-libprintf INTERFACE
    arduino-compat
)
