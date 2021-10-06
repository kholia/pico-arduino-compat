add_library(voltage-reference INTERFACE)

target_sources(voltage-reference INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VoltageReference/VoltageReference.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VoltageReference/VoltageReference.h"
)

target_include_directories(voltage-reference INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VoltageReference"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(voltage-reference INTERFACE
    arduino-compat
)
