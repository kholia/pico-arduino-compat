add_library(schoomyutilities INTERFACE)

target_sources(schoomyutilities INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities/SchooMyUtilities.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities/SchooMyUtilities.h"
)

target_include_directories(schoomyutilities INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SchooMyUtilities"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(schoomyutilities INTERFACE
    arduino-compat
)
