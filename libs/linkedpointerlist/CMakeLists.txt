add_library(pac-linkedpointerlist INTERFACE)

target_sources(pac-linkedpointerlist INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LinkedPointerList/LinkedPointerList.h"
)

target_include_directories(pac-linkedpointerlist INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LinkedPointerList"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-linkedpointerlist INTERFACE
    arduino-compat
)
