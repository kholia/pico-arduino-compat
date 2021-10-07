add_library(pac-pixetto INTERFACE)

target_sources(pac-pixetto INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/Pixetto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/InnerSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/Pixetto.h"
)

target_include_directories(pac-pixetto INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pixetto INTERFACE
    arduino-compat
)
