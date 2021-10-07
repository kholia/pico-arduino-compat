add_library(pac-homeyduino INTERFACE)

target_sources(pac-homeyduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/Homey.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/HomeyRemoteConfiguration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/chip.h"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/Homey.h"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/HomeyRemoteConfiguration.h"
)

target_include_directories(pac-homeyduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-homeyduino INTERFACE
    arduino-compat
)
