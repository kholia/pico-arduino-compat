add_library(rtc-rv-3028-c7-arduino-library INTERFACE)

target_sources(rtc-rv-3028-c7-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RV-3028_C7-Arduino_Library/src/RV-3028-C7.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RV-3028_C7-Arduino_Library/src/RV-3028-C7.h"
)

target_include_directories(rtc-rv-3028-c7-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RV-3028_C7-Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rtc-rv-3028-c7-arduino-library INTERFACE
    arduino-compat
)
