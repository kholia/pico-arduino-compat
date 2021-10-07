add_library(pac-lora INTERFACE)

target_sources(pac-lora INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src/LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src/LoRa.h"
)

target_include_directories(pac-lora INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lora INTERFACE
    arduino-compat
)
