add_library(pac-olympic-robotic-challenge INTERFACE)

target_sources(pac-olympic-robotic-challenge INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ORC/src/HC_SR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ORC/src/ORC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ORC/src/HC_SR04.h"
  "${CMAKE_CURRENT_LIST_DIR}/ORC/src/ORC.h"
)

target_include_directories(pac-olympic-robotic-challenge INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ORC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-olympic-robotic-challenge INTERFACE
    arduino-compat
)
