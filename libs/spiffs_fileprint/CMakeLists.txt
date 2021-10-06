add_library(spiffs_fileprint INTERFACE)

target_sources(spiffs_fileprint INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint/SpiffsFilePrint.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint/SpiffsFilePrint.h"
)

target_include_directories(spiffs_fileprint INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_FilePrint"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(spiffs_fileprint INTERFACE
    arduino-compat
)
