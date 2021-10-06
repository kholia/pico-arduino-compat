add_library(asyncsonar INTERFACE)

target_sources(asyncsonar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/AsyncSonarLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/AsyncSonarLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/Config.h"
)

target_include_directories(asyncsonar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(asyncsonar INTERFACE
    arduino-compat
)
