add_library(ltc1392-library INTERFACE)

target_sources(ltc1392-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LTC1392_Arduino_Library/src/LTC1392.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LTC1392_Arduino_Library/src/LTC1392.h"
)

target_include_directories(ltc1392-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LTC1392_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ltc1392-library INTERFACE
    arduino-compat
)
