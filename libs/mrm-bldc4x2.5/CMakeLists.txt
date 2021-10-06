add_library(mrm-bldc4x2.5 INTERFACE)

target_sources(mrm-bldc4x2.5 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc4x2.5/src/mrm-bldc4x2.5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc4x2.5/src/mrm-bldc4x2.5.h"
)

target_include_directories(mrm-bldc4x2.5 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-bldc4x2.5/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-bldc4x2.5 INTERFACE
    arduino-compat
)
