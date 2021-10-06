add_library(dailystruglebutton INTERFACE)

target_sources(dailystruglebutton INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DailyStruggleButton/src/DailyStruggleButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DailyStruggleButton/src/DailyStruggleButton.h"
)

target_include_directories(dailystruglebutton INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DailyStruggleButton/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dailystruglebutton INTERFACE
    arduino-compat
)
