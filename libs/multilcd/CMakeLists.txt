add_library(multilcd INTERFACE)

target_sources(multilcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src/multilcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src/multilcd.h"
)

target_include_directories(multilcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-liquid-crystal)
    add_subdirectory(../../official-libs/liquid-crystal build_official-liquid-crystal)
endif()

target_link_libraries(multilcd INTERFACE
    arduino-compat
    official-liquid-crystal
)
