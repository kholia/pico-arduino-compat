add_library(lowpower_lowpowerlab INTERFACE)

target_sources(lowpower_lowpowerlab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LowPower/LowPower.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LowPower/LowPower.h"
)

target_include_directories(lowpower_lowpowerlab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LowPower"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(lowpower_lowpowerlab INTERFACE
    arduino-compat
)
