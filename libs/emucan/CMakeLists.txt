add_library(emucan INTERFACE)

target_sources(emucan INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src/EMUcan.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src/EMUcan.h"
)

target_include_directories(emucan INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMUcan/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emucan INTERFACE
    arduino-compat
)
