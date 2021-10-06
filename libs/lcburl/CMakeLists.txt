add_library(lcburl INTERFACE)

target_sources(lcburl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LCBUrl/src/LCBUrl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LCBUrl/src/LCBUrl.h"
)

target_include_directories(lcburl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LCBUrl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lcburl INTERFACE
    arduino-compat
)
