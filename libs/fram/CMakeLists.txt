add_library(pac-fram INTERFACE)

target_sources(pac-fram INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FRAM/src/Fram.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FRAM/src/Fram.h"
)

target_include_directories(pac-fram INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FRAM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fram INTERFACE
    arduino-compat
)
