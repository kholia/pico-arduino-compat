add_library(nukiclientesp INTERFACE)

target_sources(nukiclientesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NukiClientESP/src/NukiClientESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NukiClientESP/NukiClientESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/NukiClientESP/src/NukiClientESP.h"
)

target_include_directories(nukiclientesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NukiClientESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(nukiclientesp INTERFACE
    arduino-compat
)
