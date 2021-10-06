add_library(stm32duino-mx25r6435f INTERFACE)

target_sources(stm32duino-mx25r6435f INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/MX25R6435F.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_driver.c"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_desc.h"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/mx25r6435f_driver.h"
  "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src/MX25R6435F.h"
)

target_include_directories(stm32duino-mx25r6435f INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MX25R6435F/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(stm32duino-mx25r6435f INTERFACE
    arduino-compat
)
