add_library(pac-pwmfreak INTERFACE)

target_sources(pac-pwmfreak INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMFreak/src/PWMFreak.h"
)

target_include_directories(pac-pwmfreak INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMFreak/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwmfreak INTERFACE
    arduino-compat
)
