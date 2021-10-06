add_library(gyverbutton INTERFACE)

target_sources(gyverbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/GyverButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/GyverButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/AnalogKey.h"
)

target_include_directories(gyverbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyverbutton INTERFACE
    arduino-compat
)
