add_library(tm1638plus INTERFACE)

target_sources(tm1638plus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus_Model2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus_Model2.h"
  "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src/TM1638plus_common.h"
)

target_include_directories(tm1638plus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TM1638plus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tm1638plus INTERFACE
    arduino-compat
)
