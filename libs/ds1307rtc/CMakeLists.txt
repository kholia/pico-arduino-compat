add_library(pac-ds1307rtc INTERFACE)

target_sources(pac-ds1307rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DS1307RTC/DS1307RTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DS1307RTC/DS1307RTC.h"
)

target_include_directories(pac-ds1307rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DS1307RTC"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds1307rtc INTERFACE
    arduino-compat
)
