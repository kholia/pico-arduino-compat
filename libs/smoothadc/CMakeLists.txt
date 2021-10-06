add_library(smoothadc INTERFACE)

target_sources(smoothadc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SmoothADC/src/SmoothADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SmoothADC/src/SmoothADC.h"
)

target_include_directories(smoothadc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SmoothADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smoothadc INTERFACE
    arduino-compat
)
