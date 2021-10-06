add_library(gyver433 INTERFACE)

target_sources(gyver433 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Gyver433/src/G433_crc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Gyver433/src/G433_crc.h"
  "${CMAKE_CURRENT_LIST_DIR}/Gyver433/src/Gyver433.h"
)

target_include_directories(gyver433 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Gyver433/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gyver433 INTERFACE
    arduino-compat
)
