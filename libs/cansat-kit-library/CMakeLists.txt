add_library(pac-cansat-kit-library INTERFACE)

target_sources(pac-cansat-kit-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/CanSatKitRadio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/CanSatKitBMP280.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/fifo.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/CanSatKitBMP280.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/CanSatKitRadio.h"
  "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src/CanSatKit.h"
)

target_include_directories(pac-cansat-kit-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CanSatKitLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cansat-kit-library INTERFACE
    arduino-compat
)
