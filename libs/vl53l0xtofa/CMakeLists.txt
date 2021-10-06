add_library(vl53l0xtofa INTERFACE)

target_sources(vl53l0xtofa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vl53l0x-arduino/vl53l0xTOFA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vl53l0x-arduino/vl53l0xTOFA.h"
)

target_include_directories(vl53l0xtofa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vl53l0x-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vl53l0xtofa INTERFACE
    arduino-compat
)
