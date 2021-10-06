add_library(bts7960 INTERFACE)

target_sources(bts7960 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src/BTS7960.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src/BTS7960.h"
)

target_include_directories(bts7960 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bts7960 INTERFACE
    arduino-compat
)
