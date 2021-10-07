add_library(pac-etherkit-si5351 INTERFACE)

target_sources(pac-etherkit-si5351 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src/si5351.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src/si5351.h"
)

target_include_directories(pac-etherkit-si5351 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-etherkit-si5351 INTERFACE
    arduino-compat
)
