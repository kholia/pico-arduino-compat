add_library(pac-max77650-arduino-library INTERFACE)

target_sources(pac-max77650-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MAX77650-Arduino-Library/MAX77650-Arduino-Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MAX77650-Arduino-Library/MAX77650-Arduino-Library.h"
)

target_include_directories(pac-max77650-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MAX77650-Arduino-Library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-max77650-arduino-library INTERFACE
    arduino-compat
)
