add_library(pac-numrobo INTERFACE)

target_sources(pac-numrobo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nuMROBO/nuMROBO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nuMROBO/nuMROBO.h"
)

target_include_directories(pac-numrobo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nuMROBO"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-numrobo INTERFACE
    arduino-compat
)
