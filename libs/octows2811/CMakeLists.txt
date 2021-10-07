add_library(pac-octows2811 INTERFACE)

target_sources(pac-octows2811 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811/OctoWS2811_imxrt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811/OctoWS2811.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811/examples/Fire/FireColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811/extras/VideoSDcard/addaudio/addaudio.c"
  "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811/OctoWS2811.h"
)

target_include_directories(pac-octows2811 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OctoWS2811"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-octows2811 INTERFACE
    arduino-compat
)
