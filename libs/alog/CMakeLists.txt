add_library(pac-alog INTERFACE)

target_sources(pac-alog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/ALog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/ALog.h"
)

target_include_directories(pac-alog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-alog INTERFACE
    arduino-compat
)
