add_library(pac-veml6075 INTERFACE)

target_sources(pac-veml6075 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src/VEML6075.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src/VEML6075.h"
)

target_include_directories(pac-veml6075 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VEML6075/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-veml6075 INTERFACE
    arduino-compat
)
