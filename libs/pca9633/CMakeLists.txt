add_library(pca9633 INTERFACE)

target_sources(pca9633 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pca9633/src/pca9633.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pca9633/src/pca9633.h"
)

target_include_directories(pca9633 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pca9633/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9633 INTERFACE
    arduino-compat
)
