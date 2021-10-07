add_library(pac-looper INTERFACE)

target_sources(pac-looper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/looper/looper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/looper/looper.h"
)

target_include_directories(pac-looper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/looper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-looper INTERFACE
    arduino-compat
)
