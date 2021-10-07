add_library(pac-bq25896 INTERFACE)

target_sources(pac-bq25896 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BQ25896/BQ25896.h"
)

target_include_directories(pac-bq25896 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BQ25896"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bq25896 INTERFACE
    arduino-compat
)
