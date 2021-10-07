add_library(pac-sdconfigcommand INTERFACE)

target_sources(pac-sdconfigcommand INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_returnFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_altFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand_writeConfig.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src/SDConfigCommand.h"
)

target_include_directories(pac-sdconfigcommand INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDConfigCommand/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-sdconfigcommand INTERFACE
    arduino-compat
    pac-sd
)
