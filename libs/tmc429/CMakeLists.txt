add_library(tmc429 INTERFACE)

target_sources(tmc429 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC429/src/TMC429.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC429/src/TMC429.h"
)

target_include_directories(tmc429 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC429/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tmc429 INTERFACE
    arduino-compat
)
