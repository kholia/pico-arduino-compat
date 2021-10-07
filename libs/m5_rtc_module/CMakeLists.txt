add_library(pac-m5_rtc_module INTERFACE)

target_sources(pac-m5_rtc_module INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_RTC_Module/src/M5_RTC_Module.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_RTC_Module/src/M5_RTC_Module.h"
)

target_include_directories(pac-m5_rtc_module INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_RTC_Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m5_rtc_module INTERFACE
    arduino-compat
)
