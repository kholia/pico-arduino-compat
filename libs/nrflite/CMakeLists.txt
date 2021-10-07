add_library(pac-nrflite INTERFACE)

target_sources(pac-nrflite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/NRFLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/nRF24L01.h"
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/NRFLite.h"
)

target_include_directories(pac-nrflite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nrflite INTERFACE
    arduino-compat
)
