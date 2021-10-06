add_library(ftdebouncer INTERFACE)

target_sources(ftdebouncer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FTDebouncer/src/FTDebouncer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FTDebouncer/src/FTDebouncer.h"
)

target_include_directories(ftdebouncer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FTDebouncer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ftdebouncer INTERFACE
    arduino-compat
)
