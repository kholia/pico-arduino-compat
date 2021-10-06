add_library(slight_tlc5957 INTERFACE)

target_sources(slight_tlc5957 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/slight_TLC5957/src/slight_TLC5957.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/slight_TLC5957/src/slight_TLC5957.h"
)

target_include_directories(slight_tlc5957 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/slight_TLC5957/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(slight_tlc5957 INTERFACE
    arduino-compat
)
