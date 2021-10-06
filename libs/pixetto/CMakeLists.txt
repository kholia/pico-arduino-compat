add_library(pixetto INTERFACE)

target_sources(pixetto INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/Pixetto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/InnerSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src/Pixetto.h"
)

target_include_directories(pixetto INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pixetto/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pixetto INTERFACE
    arduino-compat
)
