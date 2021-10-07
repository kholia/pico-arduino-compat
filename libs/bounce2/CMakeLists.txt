add_library(pac-bounce2 INTERFACE)

target_sources(pac-bounce2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src/Bounce2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src/Bounce2.h"
)

target_include_directories(pac-bounce2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bounce2 INTERFACE
    arduino-compat
)
