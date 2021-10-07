add_library(pac-cesmartcamp INTERFACE)

target_sources(pac-cesmartcamp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src/CESmartCamp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src/CESmartCamp.h"
)

target_include_directories(pac-cesmartcamp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cesmartcamp INTERFACE
    arduino-compat
)
