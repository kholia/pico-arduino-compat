add_library(cgnuino INTERFACE)

target_sources(cgnuino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnPeriod.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnStrobe.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnAO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnDO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnLogger.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnStopwatch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnData.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnTone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnDI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnPause.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnValtiel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnTimerAO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/CgnTimerDO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src/cgnuino.h"
)

target_include_directories(cgnuino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/cgnuino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cgnuino INTERFACE
    arduino-compat
)
