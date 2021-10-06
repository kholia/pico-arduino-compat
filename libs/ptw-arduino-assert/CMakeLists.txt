add_library(ptw-arduino-assert INTERFACE)

target_sources(ptw-arduino-assert INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PTW-Arduino-Assert/PTW-Arduino-Assert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PTW-Arduino-Assert/PTW-Arduino-Assert.h"
)

target_include_directories(ptw-arduino-assert INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PTW-Arduino-Assert"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ptw-arduino-assert INTERFACE
    arduino-compat
)
