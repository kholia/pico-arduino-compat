add_library(s9706 INTERFACE)

target_sources(s9706 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S9706/src/S9706.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-S9706/src/S9706.h"
)

target_include_directories(s9706 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-S9706/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(s9706 INTERFACE
    arduino-compat
)
