add_library(universaltimer INTERFACE)

target_sources(universaltimer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src/UniversalTimer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src/UniversalTimer.h"
)

target_include_directories(universaltimer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UniversalTimer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(universaltimer INTERFACE
    arduino-compat
)
