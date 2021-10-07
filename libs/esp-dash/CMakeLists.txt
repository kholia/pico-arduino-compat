add_library(pac-esp-dash INTERFACE)

target_sources(pac-esp-dash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/Chart.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/Card.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/ESPDash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/ESPDash.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/webpage.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/Card.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/Chart.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src/vector.h"
)

target_include_directories(pac-esp-dash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESP-DASH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-esp-dash INTERFACE
    arduino-compat
)
