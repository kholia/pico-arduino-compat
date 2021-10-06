add_library(muwerk-ustd-library INTERFACE)

target_sources(muwerk-ustd-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/rp2040/src/ustd_rp2040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/platformio/src/u2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/platformio/src/ustd-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/arduino/ustd-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/mac-linux/u2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/Examples/mac-linux/ustd-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/ustd_queue.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/ustd_functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/ustd_map.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/functional.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/map.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/ustd_platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/ustd_array.h"
  "${CMAKE_CURRENT_LIST_DIR}/ustd/array.h"
)

target_include_directories(muwerk-ustd-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ustd"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(muwerk-ustd-library INTERFACE
    arduino-compat
)
