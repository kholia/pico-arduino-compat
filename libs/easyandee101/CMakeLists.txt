add_library(pac-easyandee101 INTERFACE)

target_sources(pac-easyandee101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyAndee101/src/EasyAndee101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyAndee101/src/EasyAndee101.h"
)

target_include_directories(pac-easyandee101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyAndee101/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyandee101 INTERFACE
    arduino-compat
)
