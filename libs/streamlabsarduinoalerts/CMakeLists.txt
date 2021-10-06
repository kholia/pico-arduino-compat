add_library(streamlabsarduinoalerts INTERFACE)

target_sources(streamlabsarduinoalerts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src/StreamlabsAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src/StreamlabsAPI.h"
)

target_include_directories(streamlabsarduinoalerts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(streamlabsarduinoalerts INTERFACE
    arduino-compat
)
