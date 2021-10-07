add_library(pac-spiffs_fileprint INTERFACE)

target_sources(pac-spiffs_fileprint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint/SpiffsFilePrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint/SpiffsFilePrint.h"
)

target_include_directories(pac-spiffs_fileprint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiffs_fileprint INTERFACE
    arduino-compat
)
