add_library(pac-pinextender-library INTERFACE)

target_sources(pac-pinextender-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PinExtender/PinExtender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PinExtender/PinExtender.h"
)

target_include_directories(pac-pinextender-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PinExtender"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pinextender-library INTERFACE
    arduino-compat
)
