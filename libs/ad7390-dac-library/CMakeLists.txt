add_library(pac-ad7390-dac-library INTERFACE)

target_sources(pac-ad7390-dac-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD7390_Arduino_Library/src/AD7390.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD7390_Arduino_Library/src/AD7390.h"
)

target_include_directories(pac-ad7390-dac-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD7390_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ad7390-dac-library INTERFACE
    arduino-compat
)
