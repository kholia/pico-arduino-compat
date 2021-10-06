add_library(tridenttd_easyfreertos32 INTERFACE)

target_sources(tridenttd_easyfreertos32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_EasyFreeRTOS32/src/TridentTD_EasyFreeRTOS32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TridentTD_EasyFreeRTOS32/src/TridentTD_EasyFreeRTOS32.h"
)

target_include_directories(tridenttd_easyfreertos32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TridentTD_EasyFreeRTOS32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tridenttd_easyfreertos32 INTERFACE
    arduino-compat
)
