add_library(pac-gyverbutton INTERFACE)

target_sources(pac-gyverbutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/GyverButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/GyverButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src/AnalogKey.h"
)

target_include_directories(pac-gyverbutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GyverButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gyverbutton INTERFACE
    arduino-compat
)
