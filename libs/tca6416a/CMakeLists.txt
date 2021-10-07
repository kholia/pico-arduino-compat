add_library(pac-tca6416a INTERFACE)

target_sources(pac-tca6416a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCA6416A/src/TCA6416A.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCA6416A/src/TCA6416A.h"
)

target_include_directories(pac-tca6416a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCA6416A/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tca6416a INTERFACE
    arduino-compat
)
