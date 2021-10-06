add_library(dst-rtc INTERFACE)

target_sources(dst-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DST_RTC/DST_RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DST_RTC/DST_RTC.h"
)

target_include_directories(dst-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DST_RTC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dst-rtc INTERFACE
    arduino-compat
)
