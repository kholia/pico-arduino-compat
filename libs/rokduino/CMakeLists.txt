add_library(rokduino INTERFACE)

target_sources(rokduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ROKduino/src/ROKduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ROKduino/src/ROKduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ROKduino/src/ROKduinoConstants.h"
)

target_include_directories(rokduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ROKduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rokduino INTERFACE
    arduino-compat
)
