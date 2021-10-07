add_library(pac-easyled INTERFACE)

target_sources(pac-easyled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src/EasyLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src/EasyLed.h"
)

target_include_directories(pac-easyled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyled INTERFACE
    arduino-compat
)
