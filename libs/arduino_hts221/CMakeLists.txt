add_library(arduino_hts221 INTERFACE)

target_sources(arduino_hts221 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTS221/src/HTS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTS221/src/Arduino_HTS221.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTS221/src/HTS.h"
)

target_include_directories(arduino_hts221 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_HTS221/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduino_hts221 INTERFACE
    arduino-compat
)
