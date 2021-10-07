add_library(pac-lectroboxkeypadshield INTERFACE)

target_sources(pac-lectroboxkeypadshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KeypadShield/src/KeypadShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KeypadShield/src/KeypadShield.h"
)

target_include_directories(pac-lectroboxkeypadshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KeypadShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lectroboxkeypadshield INTERFACE
    arduino-compat
)
