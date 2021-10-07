add_library(pac-pozyx INTERFACE)

target_sources(pac-pozyx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Pozyx-Arduino-library/Pozyx_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pozyx-Arduino-library/Pozyx_core.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Pozyx-Arduino-library/Pozyx_definitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/Pozyx-Arduino-library/Pozyx.h"
)

target_include_directories(pac-pozyx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Pozyx-Arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pozyx INTERFACE
    arduino-compat
)
