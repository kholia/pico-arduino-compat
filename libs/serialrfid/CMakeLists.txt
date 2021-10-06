add_library(serialrfid INTERFACE)

target_sources(serialrfid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src/SerialRFID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src/SerialRFID.h"
)

target_include_directories(serialrfid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialrfid INTERFACE
    arduino-compat
)
