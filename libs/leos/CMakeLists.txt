add_library(pac-leos INTERFACE)

target_sources(pac-leos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/leOS/leOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leOS/leOS.h"
)

target_include_directories(pac-leos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/leOS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-leos INTERFACE
    arduino-compat
)
