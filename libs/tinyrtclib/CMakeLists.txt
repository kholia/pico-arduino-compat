add_library(pac-tinyrtclib INTERFACE)

target_sources(pac-tinyrtclib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib/TinyRTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib/TinyRTClib.h"
)

target_include_directories(pac-tinyrtclib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tinyrtclib INTERFACE
    arduino-compat
)
