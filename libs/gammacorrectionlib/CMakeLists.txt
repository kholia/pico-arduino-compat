add_library(gammacorrectionlib INTERFACE)

target_sources(gammacorrectionlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src/GammaCorrectionLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src/GammaCorrectionLib.h"
)

target_include_directories(gammacorrectionlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gammacorrectionlib INTERFACE
    arduino-compat
)
