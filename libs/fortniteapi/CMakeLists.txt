add_library(fortniteapi INTERFACE)

target_sources(fortniteapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FortniteAPI/src/FortniteAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FortniteAPI/src/FortniteAPI.h"
)

target_include_directories(fortniteapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FortniteAPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fortniteapi INTERFACE
    arduino-compat
)
