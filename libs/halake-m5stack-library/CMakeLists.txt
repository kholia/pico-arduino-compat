add_library(pac-halake-m5stack-library INTERFACE)

target_sources(pac-halake-m5stack-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/HaLakeM5StackLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/ChainArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/HaLakeM5StackLibrary.h"
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src/ChainArray.h"
)

target_include_directories(pac-halake-m5stack-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HaLake-M5Stack-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-halake-m5stack-library INTERFACE
    arduino-compat
)
