add_library(cesmartcamp INTERFACE)

target_sources(cesmartcamp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src/CESmartCamp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src/CESmartCamp.h"
)

target_include_directories(cesmartcamp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CESmartCamp/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cesmartcamp INTERFACE
    arduino-compat
)
