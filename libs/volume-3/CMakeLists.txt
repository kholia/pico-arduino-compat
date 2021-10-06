add_library(volume-3 INTERFACE)

target_sources(volume-3 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume3/src/TimerOne.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume3/src/Volume3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume3/src/Volume3.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-volume3/src/TimerOne.h"
)

target_include_directories(volume-3 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-volume3/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(volume-3 INTERFACE
    arduino-compat
)
