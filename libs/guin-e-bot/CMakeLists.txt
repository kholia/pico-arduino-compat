add_library(pac-guin-e-bot INTERFACE)

target_sources(pac-guin-e-bot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GuiNE_Bot_Arduino_Library/src/MotorDriver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GuiNE_Bot_Arduino_Library/src/MotorDriver.h"
)

target_include_directories(pac-guin-e-bot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GuiNE_Bot_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-guin-e-bot INTERFACE
    arduino-compat
)
