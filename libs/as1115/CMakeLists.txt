add_library(as1115 INTERFACE)

target_sources(as1115 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-as1115/src/AS1115.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-as1115/src/AS1115.h"
)

target_include_directories(as1115 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-as1115/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(as1115 INTERFACE
    arduino-compat
)
