add_library(pac-xlr8pid INTERFACE)

target_sources(pac-xlr8pid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8PID/src/XLR8PID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8PID/src/XLR8PID.h"
)

target_include_directories(pac-xlr8pid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8PID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8pid INTERFACE
    arduino-compat
)
