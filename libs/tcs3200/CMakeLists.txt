add_library(pac-tcs3200 INTERFACE)

target_sources(pac-tcs3200 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TCS3200_library/src/tcs3200.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TCS3200_library/src/tcs3200.h"
)

target_include_directories(pac-tcs3200 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TCS3200_library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tcs3200 INTERFACE
    arduino-compat
)
