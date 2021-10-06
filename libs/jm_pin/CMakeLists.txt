add_library(jm_pin INTERFACE)

target_sources(jm_pin INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jm_Pin/src/jm_Pin.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jm_Pin/src/jm_Pin.h"
)

target_include_directories(jm_pin INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jm_Pin/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(jm_pin INTERFACE
    arduino-compat
)
