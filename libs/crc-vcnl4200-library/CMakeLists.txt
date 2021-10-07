add_library(pac-crc-vcnl4200-library INTERFACE)

target_sources(pac-crc-vcnl4200-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src/CRC_VCNL4200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src/CRC_VCNL4200.h"
)

target_include_directories(pac-crc-vcnl4200-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC_VCNL4200/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-crc-vcnl4200-library INTERFACE
    arduino-compat
)
