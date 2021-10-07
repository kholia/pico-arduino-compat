add_library(pac-rtttl INTERFACE)

target_sources(pac-rtttl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src/Rtttl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src/Rtttl.h"
)

target_include_directories(pac-rtttl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rtttl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtttl INTERFACE
    arduino-compat
)
