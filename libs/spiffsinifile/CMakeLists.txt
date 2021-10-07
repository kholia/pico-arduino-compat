add_library(pac-spiffsinifile INTERFACE)

target_sources(pac-spiffsinifile INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFSIniFile/src/SPIFFSIniFile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SPIFFSIniFile/src/SPIFFSIniFile.h"
)

target_include_directories(pac-spiffsinifile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SPIFFSIniFile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-spiffsinifile INTERFACE
    arduino-compat
)
