add_library(pac-watermeter INTERFACE)

target_sources(pac-watermeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/watermeter/src/Watermeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/watermeter/src/Watermeter.h"
)

target_include_directories(pac-watermeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/watermeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-watermeter INTERFACE
    arduino-compat
)
