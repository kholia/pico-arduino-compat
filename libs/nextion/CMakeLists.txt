add_library(pac-nextion INTERFACE)

target_sources(pac-nextion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nextion/Nextion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nextion/Nextion.h"
)

target_include_directories(pac-nextion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nextion"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nextion INTERFACE
    arduino-compat
)
