add_library(thingpulse-xpt2046-touch INTERFACE)

target_sources(thingpulse-xpt2046-touch INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen/XPT2046_Touchscreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen/XPT2046_Touchscreen.h"
)

target_include_directories(thingpulse-xpt2046-touch INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(thingpulse-xpt2046-touch INTERFACE
    arduino-compat
)
