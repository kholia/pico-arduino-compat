add_library(pac-voltage-reference INTERFACE)

target_sources(pac-voltage-reference INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VoltageReference/VoltageReference.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VoltageReference/VoltageReference.h"
)

target_include_directories(pac-voltage-reference INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VoltageReference"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-voltage-reference INTERFACE
    arduino-compat
)
