add_library(pac-pcf8574-library INTERFACE)

target_sources(pac-pcf8574-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574_library/PCF8574.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PCF8574_library/PCF8574.h"
)

target_include_directories(pac-pcf8574-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PCF8574_library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pcf8574-library INTERFACE
    arduino-compat
)
