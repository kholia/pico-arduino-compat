add_library(pac-emucan INTERFACE)

target_sources(pac-emucan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src/EMUcan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src/EMUcan.h"
)

target_include_directories(pac-emucan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-emucan INTERFACE
    arduino-compat
)
