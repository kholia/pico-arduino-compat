add_library(pac-lorafi INTERFACE)

target_sources(pac-lorafi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LoRaFi/src/LoRaFi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LoRaFi/src/LoRaFi.h"
)

target_include_directories(pac-lorafi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LoRaFi/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lorafi INTERFACE
    arduino-compat
)
