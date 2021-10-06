add_library(capacitor INTERFACE)

target_sources(capacitor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-capacitor/src/Capacitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-capacitor/src/CapacitorLite.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-capacitor/src/CapacitorLite.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-capacitor/src/Capacitor.h"
)

target_include_directories(capacitor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-capacitor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(capacitor INTERFACE
    arduino-compat
)
