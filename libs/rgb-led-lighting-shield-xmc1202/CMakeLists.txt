add_library(rgb-led-lighting-shield-xmc1202 INTERFACE)

target_sources(rgb-led-lighting-shield-xmc1202 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RGB-LED-Lighting-Shield-XMC1202/src/RGBLEDLighting.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RGB-LED-Lighting-Shield-XMC1202/src/RGBLEDLighting.h"
)

target_include_directories(rgb-led-lighting-shield-xmc1202 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RGB-LED-Lighting-Shield-XMC1202/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rgb-led-lighting-shield-xmc1202 INTERFACE
    arduino-compat
)
