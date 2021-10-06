add_library(ad7173 INTERFACE)

target_sources(ad7173 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD7173-Arduino/AD7173.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD7173-Arduino/AD7173.h"
)

target_include_directories(ad7173 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD7173-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad7173 INTERFACE
    arduino-compat
)
