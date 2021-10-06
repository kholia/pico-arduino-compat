add_library(geenymodem INTERFACE)

target_sources(geenymodem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/geenymodem/GEENYmodem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/geenymodem/GEENYmodem.h"
)

target_include_directories(geenymodem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/geenymodem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(geenymodem INTERFACE
    arduino-compat
)
