add_library(pac-bluedot-bma400-library INTERFACE)

target_sources(pac-bluedot-bma400-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BMA400/BlueDot_BMA400.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BMA400/BlueDot_BMA400.h"
)

target_include_directories(pac-bluedot-bma400-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BlueDot_BMA400"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bluedot-bma400-library INTERFACE
    arduino-compat
)
