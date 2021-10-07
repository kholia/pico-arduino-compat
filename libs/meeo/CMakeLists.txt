add_library(pac-meeo INTERFACE)

target_sources(pac-meeo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src/Meeo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src/Meeo.h"
)

target_include_directories(pac-meeo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-meeo INTERFACE
    arduino-compat
)
