add_library(pac-queuetue-digital-balance-library INTERFACE)

target_sources(pac-queuetue-digital-balance-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src/Q2Balance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src/Q2Balance.h"
)

target_include_directories(pac-queuetue-digital-balance-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-queuetue-digital-balance-library INTERFACE
    arduino-compat
)
