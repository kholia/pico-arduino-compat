add_library(pac-fabo-208-humidity-hts221 INTERFACE)

target_sources(pac-fabo-208-humidity-hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FaBoHumidity-HTS221-Library/src/FaBoHumidity_HTS221.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FaBoHumidity-HTS221-Library/src/FaBoHumidity_HTS221.h"
)

target_include_directories(pac-fabo-208-humidity-hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FaBoHumidity-HTS221-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fabo-208-humidity-hts221 INTERFACE
    arduino-compat
)
