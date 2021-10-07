add_library(pac-ewma INTERFACE)

target_sources(pac-ewma INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EWMA/Ewma.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EWMA/Ewma.h"
  "${CMAKE_CURRENT_LIST_DIR}/EWMA/EwmaT.h"
)

target_include_directories(pac-ewma INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EWMA"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ewma INTERFACE
    arduino-compat
)
