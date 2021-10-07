add_library(pac-flash INTERFACE)

target_sources(pac-flash INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Flash/src/Flash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Flash/src/Flash.h"
)

target_include_directories(pac-flash INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Flash/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-flash INTERFACE
    arduino-compat
)
