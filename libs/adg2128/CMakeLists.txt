add_library(adg2128 INTERFACE)

target_sources(adg2128 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADG2128/src/ADG2128.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADG2128/src/ADG2128.h"
)

target_include_directories(adg2128 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-ADG2128/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adg2128 INTERFACE
    arduino-compat
)
