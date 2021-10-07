add_library(pac-schoomyutilities INTERFACE)

target_sources(pac-schoomyutilities INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities/SchooMyUtilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities/SchooMyUtilities.h"
)

target_include_directories(pac-schoomyutilities INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-schoomyutilities INTERFACE
    arduino-compat
)
