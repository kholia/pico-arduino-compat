add_library(pac-ad5231-arduino-library INTERFACE)

target_sources(pac-ad5231-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src/AD5231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src/AD5231.h"
)

target_include_directories(pac-ad5231-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad5231-arduino-library INTERFACE
    arduino-compat
)
