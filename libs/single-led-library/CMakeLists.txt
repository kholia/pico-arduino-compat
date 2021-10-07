add_library(pac-single-led-library INTERFACE)

target_sources(pac-single-led-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/singleLEDLibrary/singleLEDLibrary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/singleLEDLibrary/singleLEDLibrary.h"
)

target_include_directories(pac-single-led-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/singleLEDLibrary"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-single-led-library INTERFACE
    arduino-compat
)
