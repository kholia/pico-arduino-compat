add_library(pac-pio8255 INTERFACE)

target_sources(pac-pio8255 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pio8255/pio8255.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pio8255/pio8255.h"
)

target_include_directories(pac-pio8255 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pio8255"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pio8255 INTERFACE
    arduino-compat
)
