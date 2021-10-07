add_library(pac-veml6040 INTERFACE)

target_sources(pac-veml6040 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VEML6040/src/veml6040.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VEML6040/src/veml6040.h"
)

target_include_directories(pac-veml6040 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VEML6040/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-veml6040 INTERFACE
    arduino-compat
)
