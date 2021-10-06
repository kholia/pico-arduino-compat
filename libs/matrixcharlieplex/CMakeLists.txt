add_library(matrixcharlieplex INTERFACE)

target_sources(matrixcharlieplex INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src/MatrixCharlieplex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src/MatrixCharlieplex.h"
)

target_include_directories(matrixcharlieplex INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-Charlieplexing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(matrixcharlieplex INTERFACE
    arduino-compat
)
