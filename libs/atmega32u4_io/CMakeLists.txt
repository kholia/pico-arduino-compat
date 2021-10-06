add_library(atmega32u4_io INTERFACE)

target_sources(atmega32u4_io INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Atmega32u4_IO/src/Atmega32u4_IO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Atmega32u4_IO/src/Atmega32u4_IO.h"
)

target_include_directories(atmega32u4_io INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Atmega32u4_IO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(atmega32u4_io INTERFACE
    arduino-compat
)
