add_library(pac-tic INTERFACE)

target_sources(pac-tic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/tic-arduino/Tic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/tic-arduino/Tic.h"
)

target_include_directories(pac-tic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/tic-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tic INTERFACE
    arduino-compat
)
