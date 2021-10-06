add_library(colorconverter INTERFACE)

target_sources(colorconverter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src/ColorConverterLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src/ColorConverterLib.h"
)

target_include_directories(colorconverter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-ColorConverter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(colorconverter INTERFACE
    arduino-compat
)
