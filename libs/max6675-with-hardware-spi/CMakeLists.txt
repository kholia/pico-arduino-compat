add_library(pac-max6675-with-hardware-spi INTERFACE)

target_sources(pac-max6675-with-hardware-spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675/MAX6675.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX6675/MAX6675.h"
)

target_include_directories(pac-max6675-with-hardware-spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX6675"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max6675-with-hardware-spi INTERFACE
    arduino-compat
)
