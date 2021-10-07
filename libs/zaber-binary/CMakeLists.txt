add_library(pac-zaber-binary INTERFACE)

target_sources(pac-zaber-binary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/zaber-binary-for-arduino/ZaberShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-binary-for-arduino/ZaberBinary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-binary-for-arduino/ZaberShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/zaber-binary-for-arduino/ZaberBinary.h"
)

target_include_directories(pac-zaber-binary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/zaber-binary-for-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-zaber-binary INTERFACE
    arduino-compat
)
