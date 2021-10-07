add_library(pac-grove-rtc-ds1307 INTERFACE)

target_sources(pac-grove-rtc-ds1307 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RTC_DS1307/DS1307.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RTC_DS1307/DS1307.h"
)

target_include_directories(pac-grove-rtc-ds1307 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RTC_DS1307"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-rtc-ds1307 INTERFACE
    arduino-compat
)
