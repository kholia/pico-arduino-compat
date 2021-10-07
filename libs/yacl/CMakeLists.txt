add_library(pac-yacl INTERFACE)

target_sources(pac-yacl INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBORPair.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBOR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBORArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBORPair.h"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/YACL.h"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBORComposed.h"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBORArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/YACL/src/CBOR.h"
)

target_include_directories(pac-yacl INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/YACL/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yacl INTERFACE
    arduino-compat
)
