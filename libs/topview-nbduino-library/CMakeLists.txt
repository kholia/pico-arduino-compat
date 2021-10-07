add_library(pac-topview-nbduino-library INTERFACE)

target_sources(pac-topview-nbduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src/NBduinoLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src/NBduinoLibrary.h"
)

target_include_directories(pac-topview-nbduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-topview-nbduino-library INTERFACE
    arduino-compat
)
