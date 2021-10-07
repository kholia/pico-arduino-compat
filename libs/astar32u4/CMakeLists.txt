add_library(pac-astar32u4 INTERFACE)

target_sources(pac-astar32u4 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/Pushbutton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/PololuHD44780.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/PololuBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4Buzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4LCD.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/FastGPIO.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/Pushbutton.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4Buttons.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/PololuHD44780.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/SPIPause.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/AStar32U4.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/PololuBuzzer.h"
  "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library/USBPause.h"
)

target_include_directories(pac-astar32u4 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/a-star-32u4-arduino-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-astar32u4 INTERFACE
    arduino-compat
)
