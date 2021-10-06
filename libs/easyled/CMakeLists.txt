add_library(easyled INTERFACE)

target_sources(easyled INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src/EasyLed.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src/EasyLed.h"
)

target_include_directories(easyled INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyLed/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyled INTERFACE
    arduino-compat
)
