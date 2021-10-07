add_library(pac-geniearduino INTERFACE)

target_sources(pac-geniearduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src/genieArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src/genieArduino.h"
)

target_include_directories(pac-geniearduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-geniearduino INTERFACE
    arduino-compat
)
