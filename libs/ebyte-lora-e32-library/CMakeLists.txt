add_library(pac-ebyte-lora-e32-library INTERFACE)

target_sources(pac-ebyte-lora-e32-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRa_E32_Series_Library/LoRa_E32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRa_E32_Series_Library/LoRa_E32.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRa_E32_Series_Library/includes/statesNaming.h"
)

target_include_directories(pac-ebyte-lora-e32-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRa_E32_Series_Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ebyte-lora-e32-library INTERFACE
    arduino-compat
)
