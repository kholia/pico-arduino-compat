add_library(pac-ssvrgbgradientcalc INTERFACE)

target_sources(pac-ssvrgbgradientcalc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc/SSVRGBGradientCalc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc/SSVRGBGradientCalc.h"
)

target_include_directories(pac-ssvrgbgradientcalc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVRGBGradientCalc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvrgbgradientcalc INTERFACE
    arduino-compat
)
