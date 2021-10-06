add_library(spacecat INTERFACE)

target_sources(spacecat INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src/Spacecat.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src/Spacecat.h"
)

target_include_directories(spacecat INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RFID-Spacecat/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spacecat INTERFACE
    arduino-compat
)
