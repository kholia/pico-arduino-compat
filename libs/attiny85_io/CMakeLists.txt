add_library(attiny85_io INTERFACE)

target_sources(attiny85_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO/src/Attiny85_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO/src/Attiny85_IO.h"
)

target_include_directories(attiny85_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Attiny85_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(attiny85_io INTERFACE
    arduino-compat
)
