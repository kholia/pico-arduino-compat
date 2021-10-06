add_library(pwmrelay INTERFACE)

target_sources(pwmrelay INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src/PWMrelay.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src/PWMrelay.h"
)

target_include_directories(pwmrelay INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PWMrelay/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pwmrelay INTERFACE
    arduino-compat
)
