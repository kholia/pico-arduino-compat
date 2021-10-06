add_library(rfid134-by-makuna INTERFACE)

target_sources(rfid134-by-makuna INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Rfid134/src/Rfid134.h"
)

target_include_directories(rfid134-by-makuna INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Rfid134/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rfid134-by-makuna INTERFACE
    arduino-compat
)
