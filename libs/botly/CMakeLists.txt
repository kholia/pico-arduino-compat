add_library(pac-botly INTERFACE)

target_sources(pac-botly INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Botly-Library/src/BotlySteppers.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Botly-Library/src/Botly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Botly-Library/src/BotlySteppers.h"
  "${CMAKE_CURRENT_LIST_DIR}/Botly-Library/src/Botly.h"
)

target_include_directories(pac-botly INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Botly-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-botly INTERFACE
    arduino-compat
)
