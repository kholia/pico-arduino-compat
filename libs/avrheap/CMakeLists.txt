add_library(pac-avrheap INTERFACE)

target_sources(pac-avrheap INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/avrheap/avrheap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/avrheap/avrheap.h"
)

target_include_directories(pac-avrheap INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/avrheap"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avrheap INTERFACE
    arduino-compat
)
