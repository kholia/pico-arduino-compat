add_library(pac-hyperduino-library INTERFACE)

target_sources(pac-hyperduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library/hyperduino_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library/hyperduino_library.h"
)

target_include_directories(pac-hyperduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hyperduino-library INTERFACE
    arduino-compat
)
