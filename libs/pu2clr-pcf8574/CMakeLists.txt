add_library(pac-pu2clr-pcf8574 INTERFACE)

target_sources(pac-pu2clr-pcf8574 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/pu2clr_pcf8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574/pu2clr_pcf8574.h"
)

target_include_directories(pac-pu2clr-pcf8574 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8574"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pu2clr-pcf8574 INTERFACE
    arduino-compat
)
