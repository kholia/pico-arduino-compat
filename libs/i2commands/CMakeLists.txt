add_library(pac-i2commands INTERFACE)

target_sources(pac-i2commands INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/Command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/CommandBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/CommandHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/CommandHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/CommandCodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/ICommandListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/Command.h"
  "${CMAKE_CURRENT_LIST_DIR}/i2commands/src/CommandBuffer.h"
)

target_include_directories(pac-i2commands INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/i2commands/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-i2commands INTERFACE
    arduino-compat
)
