add_library(pac-as5x47 INTERFACE)

target_sources(pac-as5x47 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/as5x47/src/AS5X47.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as5x47/src/AS5X47Spi/AS5X47Spi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/as5x47/src/AS5X47.h"
  "${CMAKE_CURRENT_LIST_DIR}/as5x47/src/AS5X47Spi/AS5X47Spi.h"
)

target_include_directories(pac-as5x47 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/as5x47/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as5x47 INTERFACE
    arduino-compat
)
