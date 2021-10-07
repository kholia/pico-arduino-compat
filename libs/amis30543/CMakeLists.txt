add_library(pac-amis30543 INTERFACE)

target_sources(pac-amis30543 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/amis-30543-arduino/AMIS30543.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/amis-30543-arduino/AMIS30543.h"
)

target_include_directories(pac-amis30543 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/amis-30543-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-amis30543 INTERFACE
    arduino-compat
)
