add_library(pac-as3935 INTERFACE)

target_sources(pac-as3935 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AS3935/src/AS3935.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS3935/src/AS3935.h"
)

target_include_directories(pac-as3935 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AS3935/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as3935 INTERFACE
    arduino-compat
)
