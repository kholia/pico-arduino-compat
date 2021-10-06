add_library(phpoc INTERFACE)

target_sources(phpoc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/IP6Address.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/SppcVsprintf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/Sppc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/NetCache.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/Phpoc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocEmail.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocEmail.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocDateTime.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocServer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/IP6Address.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/Phpoc.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/PhpocClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src/Sppc.h"
)

target_include_directories(phpoc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-Phpoc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(phpoc INTERFACE
    arduino-compat
)
