add_library(r89m-mpr121button INTERFACE)

target_sources(r89m-mpr121button INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MPR121Button/src/MPR121Button/MPR121Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121Button/src/MPR121Button.h"
  "${CMAKE_CURRENT_LIST_DIR}/MPR121Button/src/MPR121Button/MPR121Button.h"
)

target_include_directories(r89m-mpr121button INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MPR121Button/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(r89m-mpr121button INTERFACE
    arduino-compat
)
