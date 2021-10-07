add_library(pac-gamerir INTERFACE)

target_sources(pac-gamerir INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GamerIR/GamerIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GamerIR/GamerIR.h"
)

target_include_directories(pac-gamerir INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GamerIR"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gamerir INTERFACE
    arduino-compat
)
