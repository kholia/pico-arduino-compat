add_library(pac-onion-arduino-library INTERFACE)

target_sources(pac-onion-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Onion-Arduino-Library/src/OnionLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Onion-Arduino-Library/src/OnionEventHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Onion-Arduino-Library/src/OnionLibrary.h"
)

target_include_directories(pac-onion-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Onion-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-onion-arduino-library INTERFACE
    arduino-compat
)
