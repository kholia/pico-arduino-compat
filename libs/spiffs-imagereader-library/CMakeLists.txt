add_library(pac-spiffs-imagereader-library INTERFACE)

target_sources(pac-spiffs-imagereader-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_ImageReader/src/SPIFFS_ImageReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_ImageReader/src/SPIFFS_ImageReader.h"
)

target_include_directories(pac-spiffs-imagereader-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFS_ImageReader/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiffs-imagereader-library INTERFACE
    arduino-compat
)
