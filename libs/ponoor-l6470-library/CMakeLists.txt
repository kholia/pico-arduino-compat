add_library(pac-ponoor-l6470-library INTERFACE)

target_sources(pac-ponoor-l6470-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Commands.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Support.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Library.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src/Ponoor_L6470Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/examples/SparkFundSPINexample/SparkFunL6470.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/examples/SparkFunLibraryTest/SparkFunnotes.h"
)

target_include_directories(pac-ponoor-l6470-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ponoor_L6470_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ponoor-l6470-library INTERFACE
    arduino-compat
)
