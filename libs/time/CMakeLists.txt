add_library(time INTERFACE)

target_sources(time INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Time/Time.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Time/DateStrings.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Time/TimeLib.h"
)

target_include_directories(time INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Time"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(time INTERFACE
    arduino-compat
)
