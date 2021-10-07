add_library(pac-kelvin2rgb INTERFACE)

target_sources(pac-kelvin2rgb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Kelvin2RGB/Kelvin2RGB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kelvin2RGB/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Kelvin2RGB/Kelvin2RGB.h"
)

target_include_directories(pac-kelvin2rgb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Kelvin2RGB"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-kelvin2rgb INTERFACE
    arduino-compat
)
