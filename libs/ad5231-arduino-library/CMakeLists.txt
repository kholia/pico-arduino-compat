add_library(ad5231-arduino-library INTERFACE)

target_sources(ad5231-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src/AD5231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src/AD5231.h"
)

target_include_directories(ad5231-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5231-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ad5231-arduino-library INTERFACE
    arduino-compat
)
