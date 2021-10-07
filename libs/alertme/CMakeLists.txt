add_library(pac-alertme INTERFACE)

target_sources(pac-alertme INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src/AlertMe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src/AlertMe.h"
)

target_include_directories(pac-alertme INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-alertme INTERFACE
    arduino-compat
)
