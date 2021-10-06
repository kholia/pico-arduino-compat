add_library(tinyrtclib INTERFACE)

target_sources(tinyrtclib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib/TinyRTClib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib/TinyRTClib.h"
)

target_include_directories(tinyrtclib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TinyRTCLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tinyrtclib INTERFACE
    arduino-compat
)
