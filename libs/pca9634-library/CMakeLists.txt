add_library(pca9634-library INTERFACE)

target_sources(pca9634-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/pca9634-arduino-library/pca9634.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/pca9634-arduino-library/pca9634.h"
)

target_include_directories(pca9634-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/pca9634-arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pca9634-library INTERFACE
    arduino-compat
)
