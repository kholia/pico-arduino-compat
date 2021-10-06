add_library(homeyduino INTERFACE)

target_sources(homeyduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/Homey.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/HomeyRemoteConfiguration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/chip.h"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/Homey.h"
  "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src/HomeyRemoteConfiguration.h"
)

target_include_directories(homeyduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/homey-arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(homeyduino INTERFACE
    arduino-compat
)
