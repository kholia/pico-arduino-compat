add_library(pac-vl6180x_we INTERFACE)

target_sources(pac-vl6180x_we INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X_WE/src/VL6180X_WE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VL6180X_WE/src/VL6180X_WE.h"
)

target_include_directories(pac-vl6180x_we INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VL6180X_WE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vl6180x_we INTERFACE
    arduino-compat
)
