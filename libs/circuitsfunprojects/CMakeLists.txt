add_library(circuitsfunprojects INTERFACE)

target_sources(circuitsfunprojects INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunProjects-Library-for-Arduino/src/Button.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunProjects-Library-for-Arduino/src/LSM6DS3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunProjects-Library-for-Arduino/src/CircuitsFunProjects.h"
)

target_include_directories(circuitsfunprojects INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CircuitsFunProjects-Library-for-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(circuitsfunprojects INTERFACE
    arduino-compat
)
