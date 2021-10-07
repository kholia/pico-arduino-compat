add_library(pac-lora-payload-bku INTERFACE)

target_sources(pac-lora-payload-bku INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRa-payload-BKU/src/construct_TYPE.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRa-payload-BKU/src/LoRa_payload_BKU.h"
)

target_include_directories(pac-lora-payload-bku INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRa-payload-BKU/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lora-payload-bku INTERFACE
    arduino-compat
)
