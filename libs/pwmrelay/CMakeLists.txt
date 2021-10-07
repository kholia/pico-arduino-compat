add_library(pac-pwmrelay INTERFACE)

target_sources(pac-pwmrelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src/PWMrelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src/PWMrelay.h"
)

target_include_directories(pac-pwmrelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pwmrelay INTERFACE
    arduino-compat
)
