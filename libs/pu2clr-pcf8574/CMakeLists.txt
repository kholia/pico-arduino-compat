add_library(pu2clr-pcf8574 INTERFACE)

target_sources(pu2clr-pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/pu2clr_pcf8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/pu2clr_pcf8574.h"
)

target_include_directories(pu2clr-pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8574"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pu2clr-pcf8574 INTERFACE
    arduino-compat
)
