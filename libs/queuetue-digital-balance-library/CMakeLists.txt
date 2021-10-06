add_library(queuetue-digital-balance-library INTERFACE)

target_sources(queuetue-digital-balance-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src/Q2Balance.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src/Q2Balance.h"
)

target_include_directories(queuetue-digital-balance-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Q2-Balance-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(queuetue-digital-balance-library INTERFACE
    arduino-compat
)
