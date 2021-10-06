add_library(rfm69_lowpowerlab INTERFACE)

target_sources(rfm69_lowpowerlab INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69_ATC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69_OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69registers.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69_ATC.h"
  "${CMAKE_CURRENT_LIST_DIR}/RFM69/RFM69_OTA.h"
)

target_include_directories(rfm69_lowpowerlab INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFM69"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rfm69_lowpowerlab INTERFACE
    arduino-compat
)
