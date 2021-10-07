add_library(pac-streamlabsarduinoalerts INTERFACE)

target_sources(pac-streamlabsarduinoalerts INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src/StreamlabsAPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src/StreamlabsAPI.h"
)

target_include_directories(pac-streamlabsarduinoalerts INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StreamlabsArduinoAlerts/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-streamlabsarduinoalerts INTERFACE
    arduino-compat
)
