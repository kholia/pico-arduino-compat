add_library(pac-sensirion-uart-sfa3x INTERFACE)

target_sources(pac-sensirion-uart-sfa3x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sfa3x/src/SensirionUartSfa3x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sfa3x/src/SensirionUartSfa3x.h"
)

target_include_directories(pac-sensirion-uart-sfa3x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-uart-sfa3x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sensirion-uart-sfa3x INTERFACE
    arduino-compat
)
