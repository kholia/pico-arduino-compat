add_library(pac-spacecat INTERFACE)

target_sources(pac-spacecat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src/Spacecat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src/Spacecat.h"
)

target_include_directories(pac-spacecat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spacecat INTERFACE
    arduino-compat
)
