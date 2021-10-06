add_library(hyperduino-library INTERFACE)

target_sources(hyperduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library/hyperduino_library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library/hyperduino_library.h"
)

target_include_directories(hyperduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Hyperduino-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hyperduino-library INTERFACE
    arduino-compat
)
