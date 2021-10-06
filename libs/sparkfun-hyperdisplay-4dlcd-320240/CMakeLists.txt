add_library(sparkfun-hyperdisplay-4dlcd-320240 INTERFACE)

target_sources(sparkfun-hyperdisplay-4dlcd-320240 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_4DLCD-320240_ArduinoLibrary/src/HyperDisplay_4DLCD-320240_4WSPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_4DLCD-320240_ArduinoLibrary/src/HyperDisplay_4DLCD-320240_4WSPI.h"
)

target_include_directories(sparkfun-hyperdisplay-4dlcd-320240 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HyperDisplay_4DLCD-320240_ArduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-hyperdisplay-4dlcd-320240 INTERFACE
    arduino-compat
)
