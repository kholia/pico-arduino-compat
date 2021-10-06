add_library(melopero-amg8833 INTERFACE)

target_sources(melopero-amg8833 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_AMG8833_Arduino_Library/src/Melopero_AMG8833.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_AMG8833_Arduino_Library/src/Melopero_AMG8833.h"
)

target_include_directories(melopero-amg8833 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_AMG8833_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(melopero-amg8833 INTERFACE
    arduino-compat
)
