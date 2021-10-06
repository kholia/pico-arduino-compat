add_library(stm32duino-lps25hb INTERFACE)

target_sources(stm32duino-lps25hb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LPS25HB/src/LPS25HBSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LPS25HB/src/LPS25HB_Driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/LPS25HB/src/LPS25HB_Driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/LPS25HB/src/LPS25HBSensor.h"
)

target_include_directories(stm32duino-lps25hb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LPS25HB/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-lps25hb INTERFACE
    arduino-compat
)
