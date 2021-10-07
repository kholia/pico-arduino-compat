add_library(pac-time INTERFACE)

target_sources(pac-time INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Time/Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Time/DateStrings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Time/TimeLib.h"
)

target_include_directories(pac-time INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Time"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-time INTERFACE
    arduino-compat
)
