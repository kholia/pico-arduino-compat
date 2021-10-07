add_library(pac-bplib INTERFACE)

target_sources(pac-bplib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BPLib/src/BPLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BPLib/src/BPLib.h"
)

target_include_directories(pac-bplib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BPLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bplib INTERFACE
    arduino-compat
)
