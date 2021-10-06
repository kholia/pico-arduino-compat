add_library(rfiddb INTERFACE)

target_sources(rfiddb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src/RfidDb.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src/RfidDb.h"
)

target_include_directories(rfiddb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RfidDb/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rfiddb INTERFACE
    arduino-compat
)
