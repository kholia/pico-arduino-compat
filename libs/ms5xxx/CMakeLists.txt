add_library(pac-ms5xxx INTERFACE)

target_sources(pac-ms5xxx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ms5xxx/src/MS5xxx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ms5xxx/src/MS5611.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ms5xxx/src/MS5611.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-ms5xxx/src/MS5xxx.h"
)

target_include_directories(pac-ms5xxx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-ms5xxx/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ms5xxx INTERFACE
    arduino-compat
)
