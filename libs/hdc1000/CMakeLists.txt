add_library(pac-hdc1000 INTERFACE)

target_sources(pac-hdc1000 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HDC1000/HDC1000.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-HDC1000/HDC1000.h"
)

target_include_directories(pac-hdc1000 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-HDC1000"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hdc1000 INTERFACE
    arduino-compat
)
