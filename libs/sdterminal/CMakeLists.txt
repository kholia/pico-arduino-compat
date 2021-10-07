add_library(pac-sdterminal INTERFACE)

target_sources(pac-sdterminal INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SdTerminal/src/SdTerminal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SdTerminal/src/SdTerminal.h"
)

target_include_directories(pac-sdterminal INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SdTerminal/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sdterminal INTERFACE
    arduino-compat
)
