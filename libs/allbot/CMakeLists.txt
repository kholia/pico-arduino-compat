add_library(pac-allbot INTERFACE)

target_sources(pac-allbot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT_AsyncServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT_Servo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT_AsyncServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT_Servo.h"
  "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src/ALLBOT.h"
)

target_include_directories(pac-allbot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ALLBOT-lib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-allbot INTERFACE
    arduino-compat
)
