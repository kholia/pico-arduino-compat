add_library(topview-nbduino-library INTERFACE)

target_sources(topview-nbduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src/NBduinoLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src/NBduinoLibrary.h"
)

target_include_directories(topview-nbduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NBduinoLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(topview-nbduino-library INTERFACE
    arduino-compat
)
