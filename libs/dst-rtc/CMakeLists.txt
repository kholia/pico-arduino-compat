add_library(pac-dst-rtc INTERFACE)

target_sources(pac-dst-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DST_RTC/DST_RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DST_RTC/DST_RTC.h"
)

target_include_directories(pac-dst-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DST_RTC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-dst-rtc INTERFACE
    arduino-compat
)
