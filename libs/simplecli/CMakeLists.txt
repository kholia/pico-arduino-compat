add_library(pac-simplecli INTERFACE)

target_sources(pac-simplecli INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/Command.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/SimpleCLI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/Argument.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/CommandError.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd_error.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/comparator.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/parser.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/arg.c"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/Argument.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/StringCLI.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/CommandError.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/Command.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/SimpleCLI.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/arg_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd_error_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/comparator.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/parser.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/arg.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd_error.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/cmd_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src/c/parser_types.h"
)

target_include_directories(pac-simplecli INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleCLI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplecli INTERFACE
    arduino-compat
)
