add_library(pac-espcanary INTERFACE)

target_sources(pac-espcanary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPCanary/ESPCanary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPCanary/ESPCanary.h"
)

target_include_directories(pac-espcanary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPCanary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espcanary INTERFACE
    arduino-compat
)
