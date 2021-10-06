add_library(minidac INTERFACE)

target_sources(minidac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633CFG.h"
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633.h"
)

target_include_directories(minidac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(minidac INTERFACE
    arduino-compat
)
