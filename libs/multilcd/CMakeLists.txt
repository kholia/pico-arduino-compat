add_library(pac-multilcd INTERFACE)

target_sources(pac-multilcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src/multilcd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src/multilcd.h"
)

target_include_directories(pac-multilcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MultiLcd/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-liquidcrystal)
    add_subdirectory(../../libs/liquidcrystal build_pac-liquidcrystal)
endif()

target_link_libraries(pac-multilcd INTERFACE
    arduino-compat
    pac-liquidcrystal
)
