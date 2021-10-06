add_library(emotibit-max30101 INTERFACE)

target_sources(emotibit-max30101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/spo2_algorithm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/MAX30105.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/heartRate.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/MAX30105.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/heartRate.h"
  "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src/spo2_algorithm.h"
)

target_include_directories(emotibit-max30101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EmotiBit_MAX30101/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(emotibit-max30101 INTERFACE
    arduino-compat
)
