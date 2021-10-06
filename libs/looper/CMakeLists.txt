add_library(looper INTERFACE)

target_sources(looper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/looper/looper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/looper/looper.h"
)

target_include_directories(looper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/looper"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(looper INTERFACE
    arduino-compat
)
