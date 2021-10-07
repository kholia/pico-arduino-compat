add_library(pac-trimwright INTERFACE)

target_sources(pac-trimwright INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/src/TrimWright.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/tests/hsmtest/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/tests/blink/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/tests/queues/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/tests/sugar/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/tests/fsmtest/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/src/TrimWright.h"
)

target_include_directories(pac-trimwright INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-TrimWright/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-trimwright INTERFACE
    arduino-compat
)
