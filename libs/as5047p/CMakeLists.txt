add_library(as5047p INTERFACE)

target_sources(as5047p INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/AS5047P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/spi/AS5047P_SPI_Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/types/AS5047P_Types.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/AS5047P.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/spi/AS5047P_SPI_Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/util/AS5047P_Settings.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/util/AS5047P_Util.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src/types/AS5047P_Types.h"
)

target_include_directories(as5047p INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AS5047P/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(as5047p INTERFACE
    arduino-compat
)
