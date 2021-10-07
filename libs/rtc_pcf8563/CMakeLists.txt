add_library(pac-rtc_pcf8563 INTERFACE)

target_sources(pac-rtc_pcf8563 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rtc_Pcf8563/src/Rtc_Pcf8563.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Rtc_Pcf8563/src/Rtc_Pcf8563.h"
)

target_include_directories(pac-rtc_pcf8563 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rtc_Pcf8563/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rtc_pcf8563 INTERFACE
    arduino-compat
)
