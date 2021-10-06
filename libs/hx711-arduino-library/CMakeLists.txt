add_library(hx711-arduino-library INTERFACE)

target_sources(hx711-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HX711/src/HX711.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HX711/src/HX711.h"
)

target_include_directories(hx711-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HX711/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hx711-arduino-library INTERFACE
    arduino-compat
)
