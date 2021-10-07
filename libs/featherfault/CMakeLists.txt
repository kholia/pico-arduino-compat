add_library(pac-featherfault INTERFACE)

target_sources(pac-featherfault INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FeatherFault/src/FeatherFault.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FeatherFault/src/ShortFile.h"
  "${CMAKE_CURRENT_LIST_DIR}/FeatherFault/src/FeatherFault.h"
)

target_include_directories(pac-featherfault INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FeatherFault/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-featherfault INTERFACE
    arduino-compat
)
