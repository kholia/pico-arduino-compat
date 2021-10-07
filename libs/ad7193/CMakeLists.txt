add_library(pac-ad7193 INTERFACE)

target_sources(pac-ad7193 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD7193/AD7193.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD7193/AD7193.h"
)

target_include_directories(pac-ad7193 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD7193"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad7193 INTERFACE
    arduino-compat
)
