add_library(pac-easyandee INTERFACE)

target_sources(pac-easyandee INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyAndee/src/EasyAndee.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyAndee/src/EasyAndee.h"
)

target_include_directories(pac-easyandee INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyAndee/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyandee INTERFACE
    arduino-compat
)
