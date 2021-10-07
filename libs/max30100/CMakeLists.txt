add_library(pac-max30100 INTERFACE)

target_sources(pac-max30100 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX30100/src/MAX30100.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX30100/src/MAX30100.h"
)

target_include_directories(pac-max30100 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX30100/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max30100 INTERFACE
    arduino-compat
)
