add_library(multifunctionshield INTERFACE)

target_sources(multifunctionshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src/MultiFunctionShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src/MultiFunctionShield.h"
)

target_include_directories(multifunctionshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_MultiFunctionShield/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(multifunctionshield INTERFACE
    arduino-compat
)
