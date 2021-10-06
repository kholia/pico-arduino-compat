add_library(as3935 INTERFACE)

target_sources(as3935 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AS3935/src/AS3935.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS3935/src/AS3935.h"
)

target_include_directories(as3935 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AS3935/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(as3935 INTERFACE
    arduino-compat
)
