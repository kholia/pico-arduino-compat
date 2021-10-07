add_library(pac-lps INTERFACE)

target_sources(pac-lps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/lps-arduino/LPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/lps-arduino/LPS.h"
)

target_include_directories(pac-lps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/lps-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lps INTERFACE
    arduino-compat
)
