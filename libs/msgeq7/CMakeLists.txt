add_library(pac-msgeq7 INTERFACE)

target_sources(pac-msgeq7 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MSGEQ7/src/MSGEQ7.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/MSGEQ7/src/MSGEQ7.h"
)

target_include_directories(pac-msgeq7 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MSGEQ7/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-msgeq7 INTERFACE
    arduino-compat
)
