add_library(pac-gammacorrectionlib INTERFACE)

target_sources(pac-gammacorrectionlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src/GammaCorrectionLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src/GammaCorrectionLib.h"
)

target_include_directories(pac-gammacorrectionlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-GammaCorrection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gammacorrectionlib INTERFACE
    arduino-compat
)
