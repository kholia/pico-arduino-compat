add_library(pac-arduinotea5767 INTERFACE)

target_sources(pac-arduinotea5767 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino_TEA5767/src/TEA5767Radio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino_TEA5767/src/TEA5767Radio.h"
)

target_include_directories(pac-arduinotea5767 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino_TEA5767/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinotea5767 INTERFACE
    arduino-compat
)
