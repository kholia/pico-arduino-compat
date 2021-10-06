add_library(alog INTERFACE)

target_sources(alog INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/ALog.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Logger/src/ALog.h"
)

target_include_directories(alog INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Logger/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(alog INTERFACE
    arduino-compat
)
