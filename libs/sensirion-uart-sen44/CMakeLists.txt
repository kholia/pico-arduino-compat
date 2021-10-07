add_library(pac-sensirion-uart-sen44 INTERFACE)

target_sources(pac-sensirion-uart-sen44 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sen44/src/SensirionUartSen44.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sen44/src/SensirionUartSen44.h"
)

target_include_directories(pac-sensirion-uart-sen44 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sen44/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensirion-uart-sen44 INTERFACE
    arduino-compat
)
