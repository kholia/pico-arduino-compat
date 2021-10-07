add_library(pac-r89m-capacitivebutton INTERFACE)

target_sources(pac-r89m-capacitivebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton/CapacitiveButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton/CapacitiveButton.h"
)

target_include_directories(pac-r89m-capacitivebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-r89m-capacitivebutton INTERFACE
    arduino-compat
)
