add_library(meeo INTERFACE)

target_sources(meeo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src/Meeo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src/Meeo.h"
)

target_include_directories(meeo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/meeo-arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(meeo INTERFACE
    arduino-compat
)
