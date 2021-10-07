add_library(pac-geenymodem INTERFACE)

target_sources(pac-geenymodem INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/geenymodem/GEENYmodem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/geenymodem/GEENYmodem.h"
)

target_include_directories(pac-geenymodem INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/geenymodem"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-geenymodem INTERFACE
    arduino-compat
)
