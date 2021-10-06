add_library(tm1638lite INTERFACE)

target_sources(tm1638lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1638lite/src/TM1638lite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638lite/src/TM1638lite.h"
)

target_include_directories(tm1638lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1638lite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tm1638lite INTERFACE
    arduino-compat
)
