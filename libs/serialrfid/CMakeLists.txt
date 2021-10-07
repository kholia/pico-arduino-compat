add_library(pac-serialrfid INTERFACE)

target_sources(pac-serialrfid INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src/SerialRFID.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src/SerialRFID.h"
)

target_include_directories(pac-serialrfid INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialRFID/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialrfid INTERFACE
    arduino-compat
)
