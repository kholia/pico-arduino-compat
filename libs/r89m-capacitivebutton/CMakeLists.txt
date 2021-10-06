add_library(r89m-capacitivebutton INTERFACE)

target_sources(r89m-capacitivebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton/CapacitiveButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src/CapacitiveButton/CapacitiveButton.h"
)

target_include_directories(r89m-capacitivebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CapacitiveButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(r89m-capacitivebutton INTERFACE
    arduino-compat
)
