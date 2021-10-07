add_library(pac-qzqsm INTERFACE)

target_sources(pac-qzqsm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QZQSM/src/QZQSM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QZQSM/src/QZQSM.h"
)

target_include_directories(pac-qzqsm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QZQSM/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qzqsm INTERFACE
    arduino-compat
)
