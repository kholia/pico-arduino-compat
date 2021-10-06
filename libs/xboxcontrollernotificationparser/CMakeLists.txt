add_library(xboxcontrollernotificationparser INTERFACE)

target_sources(xboxcontrollernotificationparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src/XboxControllerNotificationParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src/XboxControllerNotificationParser.h"
)

target_include_directories(xboxcontrollernotificationparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-XboxControllerNotificationParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(xboxcontrollernotificationparser INTERFACE
    arduino-compat
)
