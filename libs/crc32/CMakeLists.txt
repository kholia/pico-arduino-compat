add_library(crc32 INTERFACE)

target_sources(crc32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CRC32/src/CRC32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CRC32/src/CRC32.h"
)

target_include_directories(crc32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CRC32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(crc32 INTERFACE
    arduino-compat
)
