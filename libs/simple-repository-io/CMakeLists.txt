add_library(pac-simple-repository-io INTERFACE)

target_sources(pac-simple-repository-io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_io/src/io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_io/src/iorepo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_io/src/iorepo.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_io/src/io.h"
)

target_include_directories(pac-simple-repository-io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_io/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simple-repository-io INTERFACE
    arduino-compat
)
