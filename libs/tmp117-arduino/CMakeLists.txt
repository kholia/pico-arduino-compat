add_library(tmp117-arduino INTERFACE)

target_sources(tmp117-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMP117-Arduino/src/TMP117.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMP117-Arduino/src/TMP117.h"
)

target_include_directories(tmp117-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMP117-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tmp117-arduino INTERFACE
    arduino-compat
)
