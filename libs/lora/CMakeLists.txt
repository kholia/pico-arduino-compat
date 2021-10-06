add_library(lora INTERFACE)

target_sources(lora INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src/LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src/LoRa.h"
)

target_include_directories(lora INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-LoRa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lora INTERFACE
    arduino-compat
)
