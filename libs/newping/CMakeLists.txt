add_library(newping INTERFACE)

target_sources(newping INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-new-ping/src/NewPing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-new-ping/src/NewPing.h"
)

target_include_directories(newping INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-new-ping/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(newping INTERFACE
    arduino-compat
)
