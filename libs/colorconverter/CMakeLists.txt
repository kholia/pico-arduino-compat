add_library(pac-colorconverter INTERFACE)

target_sources(pac-colorconverter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src/ColorConverterLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src/ColorConverterLib.h"
)

target_include_directories(pac-colorconverter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-colorconverter INTERFACE
    arduino-compat
)
