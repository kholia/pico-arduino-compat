add_library(m10serialaux INTERFACE)

target_sources(m10serialaux INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M10SerialAUX/src/M10SerialAUX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M10SerialAUX/src/M10SerialAUX.h"
)

target_include_directories(m10serialaux INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M10SerialAUX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(m10serialaux INTERFACE
    arduino-compat
)
