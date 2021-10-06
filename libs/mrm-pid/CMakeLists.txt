add_library(mrm-pid INTERFACE)

target_sources(mrm-pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/mrm-pid/src/mrm-pid.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/mrm-pid/src/mrm-pid.h"
)

target_include_directories(mrm-pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/mrm-pid/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mrm-pid INTERFACE
    arduino-compat
)
