add_library(rtttl INTERFACE)

target_sources(rtttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src/Rtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src/Rtttl.h"
)

target_include_directories(rtttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtttl INTERFACE
    arduino-compat
)
