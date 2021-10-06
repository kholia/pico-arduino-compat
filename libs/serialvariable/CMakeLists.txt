add_library(serialvariable INTERFACE)

target_sources(serialvariable INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialVariable/SerialVariable.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialVariable/SerialVariable.h"
)

target_include_directories(serialvariable INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialVariable"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialvariable INTERFACE
    arduino-compat
)
