add_library(apa102 INTERFACE)

target_sources(apa102 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/apa102-arduino/APA102.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/apa102-arduino/examples/GameOfLife/start.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/apa102-arduino/APA102.h"
)

target_include_directories(apa102 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/apa102-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(apa102 INTERFACE
    arduino-compat
)
