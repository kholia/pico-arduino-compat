add_library(pac-radiationwatch INTERFACE)

target_sources(pac-radiationwatch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src/RadiationWatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src/RadiationWatch.h"
)

target_include_directories(pac-radiationwatch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoPocketGeiger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-radiationwatch INTERFACE
    arduino-compat
)
