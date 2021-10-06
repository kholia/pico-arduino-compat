add_library(crc-vcnl4200-library INTERFACE)

target_sources(crc-vcnl4200-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src/CRC_VCNL4200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src/CRC_VCNL4200.h"
)

target_include_directories(crc-vcnl4200-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(crc-vcnl4200-library INTERFACE
    arduino-compat
)
