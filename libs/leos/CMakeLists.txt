add_library(leos INTERFACE)

target_sources(leos INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/leOS/leOS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/leOS/leOS.h"
)

target_include_directories(leos INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/leOS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(leos INTERFACE
    arduino-compat
)
