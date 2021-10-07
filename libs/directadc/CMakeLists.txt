add_library(pac-directadc INTERFACE)

target_sources(pac-directadc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/directADC/src/directADC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/directADC/src/directADC.h"
)

target_include_directories(pac-directadc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/directADC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-directadc INTERFACE
    arduino-compat
)
