add_library(pac-rfiddb INTERFACE)

target_sources(pac-rfiddb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src/RfidDb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src/RfidDb.h"
)

target_include_directories(pac-rfiddb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-rfiddb INTERFACE
    arduino-compat
)
