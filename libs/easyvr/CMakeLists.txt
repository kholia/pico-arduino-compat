add_library(pac-easyvr INTERFACE)

target_sources(pac-easyvr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyVR-Arduino/src/EasyVR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyVR-Arduino/src/EasyVR.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyVR-Arduino/src/internal/protocol.h"
)

target_include_directories(pac-easyvr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyVR-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-easyvr INTERFACE
    arduino-compat
)
