add_library(pac-universaltimer INTERFACE)

target_sources(pac-universaltimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src/UniversalTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src/UniversalTimer.h"
)

target_include_directories(pac-universaltimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-universaltimer INTERFACE
    arduino-compat
)
