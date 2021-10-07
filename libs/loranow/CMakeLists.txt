add_library(pac-loranow INTERFACE)

target_sources(pac-loranow INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/LoRaNow.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/utility/LoRa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/utility/LoRaUtilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/LoRaNow.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/utility/LoRa.h"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src/utility/LoRaUtilities.h"
)

target_include_directories(pac-loranow INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRaNow/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-loranow INTERFACE
    arduino-compat
)
