add_library(pac-opt3101 INTERFACE)

target_sources(pac-opt3101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino/OPT3101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino/OPT3101.h"
)

target_include_directories(pac-opt3101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/opt3101-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-opt3101 INTERFACE
    arduino-compat
)
