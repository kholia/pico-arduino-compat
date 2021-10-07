add_library(pac-softspib INTERFACE)

target_sources(pac-softspib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SoftSPIB/SoftSPIB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SoftSPIB/SoftSPIB.h"
)

target_include_directories(pac-softspib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SoftSPIB"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-softspib INTERFACE
    arduino-compat
)
