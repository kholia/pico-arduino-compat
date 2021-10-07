add_library(pac-stm32duino-mx25r6435f INTERFACE)

target_sources(pac-stm32duino-mx25r6435f INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/MX25R6435F.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_desc.h"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/MX25R6435F.h"
)

target_include_directories(pac-stm32duino-mx25r6435f INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stm32duino-mx25r6435f INTERFACE
    arduino-compat
)
