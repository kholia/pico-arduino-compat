add_library(pac-gyverntc INTERFACE)

target_sources(pac-gyverntc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverNTC/src/GyverNTC.h"
)

target_include_directories(pac-gyverntc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverNTC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverntc INTERFACE
    arduino-compat
)
