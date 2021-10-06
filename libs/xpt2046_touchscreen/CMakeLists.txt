add_library(xpt2046_touchscreen INTERFACE)

target_sources(xpt2046_touchscreen INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen/XPT2046_Touchscreen.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen/XPT2046_Touchscreen.h"
)

target_include_directories(xpt2046_touchscreen INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Touchscreen"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xpt2046_touchscreen INTERFACE
    arduino-compat
)
