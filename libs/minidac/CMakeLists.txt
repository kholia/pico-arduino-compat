add_library(pac-minidac INTERFACE)

target_sources(pac-minidac INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633CFG.h"
  "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library/LTC2633.h"
)

target_include_directories(pac-minidac INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/miniDAC-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-minidac INTERFACE
    arduino-compat
)
