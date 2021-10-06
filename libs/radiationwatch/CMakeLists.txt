add_library(radiationwatch INTERFACE)

target_sources(radiationwatch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src/RadiationWatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src/RadiationWatch.h"
)

target_include_directories(radiationwatch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(radiationwatch INTERFACE
    arduino-compat
)
