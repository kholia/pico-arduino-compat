add_library(pac-kxtj3-1057 INTERFACE)

target_sources(pac-kxtj3-1057 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KXTJ3-1057/src/kxtj3-1057.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KXTJ3-1057/src/kxtj3-1057.h"
)

target_include_directories(pac-kxtj3-1057 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KXTJ3-1057/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kxtj3-1057 INTERFACE
    arduino-compat
)
