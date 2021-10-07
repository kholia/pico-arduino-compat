add_library(pac-queuetue-hx711-library INTERFACE)

target_sources(pac-queuetue-hx711-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Q2-HX711-Arduino-Library/src/Q2HX711.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Q2-HX711-Arduino-Library/src/Q2HX711.h"
)

target_include_directories(pac-queuetue-hx711-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Q2-HX711-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-queuetue-hx711-library INTERFACE
    arduino-compat
)
