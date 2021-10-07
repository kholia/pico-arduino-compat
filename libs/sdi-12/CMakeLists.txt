add_library(pac-sdi-12 INTERFACE)

target_sources(pac-sdi-12 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SDI-12/src/SDI12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SDI-12/src/SDI12_boards.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SDI-12/src/SDI12_boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SDI-12/src/SDI12.h"
)

target_include_directories(pac-sdi-12 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SDI-12/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sdi-12 INTERFACE
    arduino-compat
)
