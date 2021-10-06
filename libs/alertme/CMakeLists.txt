add_library(alertme INTERFACE)

target_sources(alertme INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src/AlertMe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src/AlertMe.h"
)

target_include_directories(alertme INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AlertMe/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(alertme INTERFACE
    arduino-compat
)
