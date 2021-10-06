add_library(envirodiy_ds3231 INTERFACE)

target_sources(envirodiy_ds3231 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_DS3231/src/Sodaq_DS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sodaq_DS3231/src/Sodaq_DS3231.h"
)

target_include_directories(envirodiy_ds3231 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sodaq_DS3231/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(envirodiy_ds3231 INTERFACE
    arduino-compat
)
