add_library(ds1881 INTERFACE)

target_sources(ds1881 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DS1881/src/DS1881.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-DS1881/src/DS1881.h"
)

target_include_directories(ds1881 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-DS1881/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ds1881 INTERFACE
    arduino-compat
)
