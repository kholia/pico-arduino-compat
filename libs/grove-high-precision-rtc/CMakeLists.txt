add_library(pac-grove-high-precision-rtc INTERFACE)

target_sources(pac-grove-high-precision-rtc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_High_Precision_RTC_PCF85063TP/PCF85063TP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_High_Precision_RTC_PCF85063TP/PCF85063TP.h"
)

target_include_directories(pac-grove-high-precision-rtc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_High_Precision_RTC_PCF85063TP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-high-precision-rtc INTERFACE
    arduino-compat
)
