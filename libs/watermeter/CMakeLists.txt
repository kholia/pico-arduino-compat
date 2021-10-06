add_library(watermeter INTERFACE)

target_sources(watermeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/watermeter/src/Watermeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/watermeter/src/Watermeter.h"
)

target_include_directories(watermeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/watermeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(watermeter INTERFACE
    arduino-compat
)
