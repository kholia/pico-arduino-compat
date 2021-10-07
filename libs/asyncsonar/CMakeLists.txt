add_library(pac-asyncsonar INTERFACE)

target_sources(pac-asyncsonar INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/AsyncSonarLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/AsyncSonarLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src/Config.h"
)

target_include_directories(pac-asyncsonar INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AsyncSonar/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-asyncsonar INTERFACE
    arduino-compat
)
