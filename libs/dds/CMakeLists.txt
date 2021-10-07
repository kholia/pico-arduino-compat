add_library(pac-dds INTERFACE)

target_sources(pac-dds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DDS/src/DDS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DDS/src/DDS.h"
)

target_include_directories(pac-dds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DDS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dds INTERFACE
    arduino-compat
)
