add_library(dsfamily INTERFACE)

target_sources(dsfamily INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DSFamily/src/DSFamily.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DSFamily/src/DSFamily.h"
)

target_include_directories(dsfamily INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DSFamily/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dsfamily INTERFACE
    arduino-compat
)
