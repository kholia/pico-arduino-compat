add_library(numrobo INTERFACE)

target_sources(numrobo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/nuMROBO/nuMROBO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/nuMROBO/nuMROBO.h"
)

target_include_directories(numrobo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/nuMROBO"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(numrobo INTERFACE
    arduino-compat
)
