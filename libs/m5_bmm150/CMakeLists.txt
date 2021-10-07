add_library(pac-m5_bmm150 INTERFACE)

target_sources(pac-m5_bmm150 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M5_BMM150/src/M5_BMM150.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M5_BMM150/src/M5_BMM150.h"
  "${CMAKE_CURRENT_LIST_DIR}/M5_BMM150/src/M5_BMM150_DEFS.h"
)

target_include_directories(pac-m5_bmm150 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M5_BMM150/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m5_bmm150 INTERFACE
    arduino-compat
)
