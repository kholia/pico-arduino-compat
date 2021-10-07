add_library(pac-obd2 INTERFACE)

target_sources(pac-obd2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-OBD2/src/OBD2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-OBD2/src/OBD2.h"
)

target_include_directories(pac-obd2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-OBD2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-obd2 INTERFACE
    arduino-compat
)
