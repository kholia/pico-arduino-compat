add_library(pac-bts7960 INTERFACE)

target_sources(pac-bts7960 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src/BTS7960.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src/BTS7960.h"
)

target_include_directories(pac-bts7960 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-BTS7960/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bts7960 INTERFACE
    arduino-compat
)
