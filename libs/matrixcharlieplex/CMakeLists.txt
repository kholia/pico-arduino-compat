add_library(pac-matrixcharlieplex INTERFACE)

target_sources(pac-matrixcharlieplex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src/MatrixCharlieplex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src/MatrixCharlieplex.h"
)

target_include_directories(pac-matrixcharlieplex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrixcharlieplex INTERFACE
    arduino-compat
)
