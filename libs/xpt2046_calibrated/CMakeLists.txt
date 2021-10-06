add_library(xpt2046_calibrated INTERFACE)

target_sources(xpt2046_calibrated INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Calibrated/src/XPT2046_Calibrated.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Calibrated/src/XPT2046_Calibrated.h"
)

target_include_directories(xpt2046_calibrated INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XPT2046_Calibrated/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xpt2046_calibrated INTERFACE
    arduino-compat
)
