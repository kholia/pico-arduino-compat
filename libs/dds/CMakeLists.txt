add_library(dds INTERFACE)

target_sources(dds INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DDS/src/DDS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DDS/src/DDS.h"
)

target_include_directories(dds INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DDS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dds INTERFACE
    arduino-compat
)
