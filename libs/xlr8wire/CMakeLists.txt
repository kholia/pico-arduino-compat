add_library(pac-xlr8wire INTERFACE)

target_sources(pac-xlr8wire INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src/XLR8Wire.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src/utility/XLR8twi.c"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src/XLR8Wire.h"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src/XLR8I2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src/utility/XLR8twi.h"
)

target_include_directories(pac-xlr8wire INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/XLR8Wire/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xlr8wire INTERFACE
    arduino-compat
)
