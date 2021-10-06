add_library(nrflite INTERFACE)

target_sources(nrflite INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/NRFLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/nRF24L01.h"
  "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src/NRFLite.h"
)

target_include_directories(nrflite INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NRFLite/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nrflite INTERFACE
    arduino-compat
)
