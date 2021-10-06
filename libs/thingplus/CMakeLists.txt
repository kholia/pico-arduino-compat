add_library(thingplus INTERFACE)

target_sources(thingplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_library/src/Thingplus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_library/src/Thingplus.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_library/src/platform.h"
)

target_include_directories(thingplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thingplus INTERFACE
    arduino-compat
)
