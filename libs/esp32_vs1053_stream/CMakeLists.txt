add_library(pac-esp32_vs1053_stream INTERFACE)

target_sources(pac-esp32_vs1053_stream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_VS1053_Stream/src/ESP32_VS1053_Stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32_VS1053_Stream/src/ESP32_VS1053_Stream.h"
)

target_include_directories(pac-esp32_vs1053_stream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32_VS1053_Stream/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp32_vs1053_stream INTERFACE
    arduino-compat
)
