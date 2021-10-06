add_library(sdconfigcommand INTERFACE)

target_sources(sdconfigcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_returnFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_altFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_writeConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand.h"
)

target_include_directories(sdconfigcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(sdconfigcommand INTERFACE
    arduino-compat
    official-sd
)
