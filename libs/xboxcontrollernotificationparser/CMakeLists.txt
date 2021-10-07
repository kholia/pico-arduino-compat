add_library(pac-xboxcontrollernotificationparser INTERFACE)

target_sources(pac-xboxcontrollernotificationparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src/XboxControllerNotificationParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src/XboxControllerNotificationParser.h"
)

target_include_directories(pac-xboxcontrollernotificationparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-xboxcontrollernotificationparser INTERFACE
    arduino-compat
)
