add_library(pac-serialvariable INTERFACE)

target_sources(pac-serialvariable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialVariable/SerialVariable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialVariable/SerialVariable.h"
)

target_include_directories(pac-serialvariable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialVariable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialvariable INTERFACE
    arduino-compat
)
