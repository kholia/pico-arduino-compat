add_library(datavisionlcd INTERFACE)

target_sources(datavisionlcd INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DatavisionLCD/src/DV16215.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DatavisionLCD/src/DV16215.h"
)

target_include_directories(datavisionlcd INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DatavisionLCD/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(datavisionlcd INTERFACE
    arduino-compat
)
