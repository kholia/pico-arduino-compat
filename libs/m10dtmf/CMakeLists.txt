add_library(pac-m10dtmf INTERFACE)

target_sources(pac-m10dtmf INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10DTMF/src/M10DTMF.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10DTMF/src/M10DTMF.h"
)

target_include_directories(pac-m10dtmf INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10DTMF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m10dtmf INTERFACE
    arduino-compat
)
