add_library(pac-tmc429 INTERFACE)

target_sources(pac-tmc429 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC429/src/TMC429.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC429/src/TMC429.h"
)

target_include_directories(pac-tmc429 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC429/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tmc429 INTERFACE
    arduino-compat
)
