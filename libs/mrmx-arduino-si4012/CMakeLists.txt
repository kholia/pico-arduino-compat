add_library(pac-mrmx-arduino-si4012 INTERFACE)

target_sources(pac-mrmx-arduino-si4012 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SI4012/Si4012.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-SI4012/Si4012.h"
)

target_include_directories(pac-mrmx-arduino-si4012 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-SI4012"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mrmx-arduino-si4012 INTERFACE
    arduino-compat
)
