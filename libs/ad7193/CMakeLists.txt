add_library(ad7193 INTERFACE)

target_sources(ad7193 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD7193/AD7193.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD7193/AD7193.h"
)

target_include_directories(ad7193 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD7193"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad7193 INTERFACE
    arduino-compat
)
