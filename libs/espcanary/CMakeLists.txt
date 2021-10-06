add_library(espcanary INTERFACE)

target_sources(espcanary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPCanary/ESPCanary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPCanary/ESPCanary.h"
)

target_include_directories(espcanary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPCanary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(espcanary INTERFACE
    arduino-compat
)
