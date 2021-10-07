add_library(pac-constellation INTERFACE)

target_sources(pac-constellation INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino/Constellation.h"
  "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino/PackageDescriptor.h"
  "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino/BaseDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino/BufferedPrint.h"
)

target_include_directories(pac-constellation INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/constellation-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-constellation INTERFACE
    arduino-compat
)
