add_library(pac-vbus-arduino INTERFACE)

target_sources(pac-vbus-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/vbus-arduino-library/src/VBUSDecoder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/vbus-arduino-library/src/resol.h"
  "${CMAKE_CURRENT_LIST_DIR}/vbus-arduino-library/src/VBUSDecoder.h"
)

target_include_directories(pac-vbus-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/vbus-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vbus-arduino INTERFACE
    arduino-compat
)
