add_library(pac-dimmer-class-for-atmega32u4 INTERFACE)

target_sources(pac-dimmer-class-for-atmega32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Dimmer32u4/src/Dimmer32u4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Dimmer32u4/src/Dimmer32u4.h"
)

target_include_directories(pac-dimmer-class-for-atmega32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Dimmer32u4/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dimmer-class-for-atmega32u4 INTERFACE
    arduino-compat
)
