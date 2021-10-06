add_library(ssvrgbgradientcalc INTERFACE)

target_sources(ssvrgbgradientcalc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc/SSVRGBGradientCalc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc/SSVRGBGradientCalc.h"
)

target_include_directories(ssvrgbgradientcalc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvrgbgradientcalc INTERFACE
    arduino-compat
)
