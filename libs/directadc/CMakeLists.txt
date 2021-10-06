add_library(directadc INTERFACE)

target_sources(directadc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/directADC/src/directADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/directADC/src/directADC.h"
)

target_include_directories(directadc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/directADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(directadc INTERFACE
    arduino-compat
)
