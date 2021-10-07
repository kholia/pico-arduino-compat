add_library(pac-button2 INTERFACE)

target_sources(pac-button2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Button2/src/Button2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Button2/src/Button2.h"
)

target_include_directories(pac-button2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Button2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-button2 INTERFACE
    arduino-compat
)
