add_library(pac-curvefitting INTERFACE)

target_sources(pac-curvefitting INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduinoCurveFitting/src/curveFitting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduinoCurveFitting/src/curveFitting.h"
)

target_include_directories(pac-curvefitting INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduinoCurveFitting/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-curvefitting INTERFACE
    arduino-compat
)
