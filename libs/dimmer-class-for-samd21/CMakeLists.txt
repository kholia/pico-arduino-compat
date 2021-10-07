add_library(pac-dimmer-class-for-samd21 INTERFACE)

target_sources(pac-dimmer-class-for-samd21 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DimmerZero/src/DimmerZero.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DimmerZero/src/DimmerZero.h"
)

target_include_directories(pac-dimmer-class-for-samd21 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DimmerZero/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dimmer-class-for-samd21 INTERFACE
    arduino-compat
)
