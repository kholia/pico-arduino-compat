add_library(pac-hx711 INTERFACE)

target_sources(pac-hx711 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HX711/HX711.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HX711/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HX711/HX711.h"
)

target_include_directories(pac-hx711 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HX711"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hx711 INTERFACE
    arduino-compat
)
