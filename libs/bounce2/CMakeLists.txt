add_library(bounce2 INTERFACE)

target_sources(bounce2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src/Bounce2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src/Bounce2.h"
)

target_include_directories(bounce2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Bounce2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(bounce2 INTERFACE
    arduino-compat
)
