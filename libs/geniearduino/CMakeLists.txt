add_library(geniearduino INTERFACE)

target_sources(geniearduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src/genieArduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src/genieArduino.h"
)

target_include_directories(geniearduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ViSi-Genie-Arduino-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(geniearduino INTERFACE
    arduino-compat
)
