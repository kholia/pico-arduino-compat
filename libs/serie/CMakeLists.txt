add_library(pac-serie INTERFACE)

target_sources(pac-serie INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Compactor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Mesure.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Compressor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Serie.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Comp_or.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Comp_or.h"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Mesure.h"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Serie.h"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Compressor.h"
  "${CMAKE_CURRENT_LIST_DIR}/Serie/src/Compactor.h"
)

target_include_directories(pac-serie INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Serie/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serie INTERFACE
    arduino-compat
)
