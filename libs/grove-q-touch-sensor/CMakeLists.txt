add_library(pac-grove-q-touch-sensor INTERFACE)

target_sources(pac-grove-q-touch-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_QTouch/Seeed_QTouch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Seeed_QTouch/Seeed_QTouch.h"
)

target_include_directories(pac-grove-q-touch-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Seeed_QTouch"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-q-touch-sensor INTERFACE
    arduino-compat
)
