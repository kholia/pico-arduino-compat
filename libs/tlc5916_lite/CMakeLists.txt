add_library(pac-tlc5916_lite INTERFACE)

target_sources(pac-tlc5916_lite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TLC5916_Lite/TCL5916_Lite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TLC5916_Lite/TLC5916_Lite.h"
)

target_include_directories(pac-tlc5916_lite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TLC5916_Lite"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tlc5916_lite INTERFACE
    arduino-compat
)
