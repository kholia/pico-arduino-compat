add_library(etherkit-si5351 INTERFACE)

target_sources(etherkit-si5351 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src/si5351.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src/si5351.h"
)

target_include_directories(etherkit-si5351 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Si5351Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(etherkit-si5351 INTERFACE
    arduino-compat
)
