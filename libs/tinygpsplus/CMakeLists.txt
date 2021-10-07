add_library(pac-tinygpsplus INTERFACE)

target_sources(pac-tinygpsplus INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPSPlus/src/TinyGPSPlus.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyGPSPlus/src/TinyGPSPlus.h"
)

target_include_directories(pac-tinygpsplus INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyGPSPlus/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinygpsplus INTERFACE
    arduino-compat
)
