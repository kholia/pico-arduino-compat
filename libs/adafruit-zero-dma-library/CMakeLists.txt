add_library(adafruit-zero-dma-library INTERFACE)

target_sources(adafruit-zero-dma-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroDMA/Adafruit_ZeroDMA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroDMA/Adafruit_ZeroDMA.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroDMA/utility/dma.h"
)

target_include_directories(adafruit-zero-dma-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_ZeroDMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-zero-dma-library INTERFACE
    arduino-compat
)
