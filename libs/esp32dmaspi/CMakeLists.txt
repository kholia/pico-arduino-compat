add_library(esp32dmaspi INTERFACE)

target_sources(esp32dmaspi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP32DMASPI/ESP32DMASPISlave.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32DMASPI/ESP32DMASPIMaster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32DMASPI/ESP32DMASPISlave.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP32DMASPI/ESP32DMASPIMaster.h"
)

target_include_directories(esp32dmaspi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP32DMASPI"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(esp32dmaspi INTERFACE
    arduino-compat
)
