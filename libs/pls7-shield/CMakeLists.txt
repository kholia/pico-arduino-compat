add_library(pac-pls7-shield INTERFACE)

target_sources(pac-pls7-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PLS7shield/PLS7shield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PLS7shield/PLS7shield.h"
)

target_include_directories(pac-pls7-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PLS7shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pls7-shield INTERFACE
    arduino-compat
)
