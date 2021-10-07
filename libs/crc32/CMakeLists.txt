add_library(pac-crc32 INTERFACE)

target_sources(pac-crc32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC32/src/CRC32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC32/src/CRC32.h"
)

target_include_directories(pac-crc32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-crc32 INTERFACE
    arduino-compat
)
