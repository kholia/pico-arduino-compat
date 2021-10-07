add_library(pac-akafugu-wirertc-library INTERFACE)

target_sources(pac-akafugu-wirertc-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WireRtcLibrary/WireRtcLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WireRtcLibrary/WireRtcLib.h"
)

target_include_directories(pac-akafugu-wirertc-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WireRtcLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-akafugu-wirertc-library INTERFACE
    arduino-compat
)
