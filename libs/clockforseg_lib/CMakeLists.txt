add_library(pac-clockforseg_lib INTERFACE)

target_sources(pac-clockforseg_lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClockForSeg_Lib/ClockForSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClockForSeg_Lib/ClockForSeg.h"
)

target_include_directories(pac-clockforseg_lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClockForSeg_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-clockforseg_lib INTERFACE
    arduino-compat
)
