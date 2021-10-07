add_library(pac-dataserverios INTERFACE)

target_sources(pac-dataserverios INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DataServeriOS/src/DataServeriOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DataServeriOS/src/DataServeriOS.h"
)

target_include_directories(pac-dataserverios INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DataServeriOS/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dataserverios INTERFACE
    arduino-compat
)
