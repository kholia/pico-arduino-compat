add_library(blues-wireless-notecard-pseudo-sensor INTERFACE)

target_sources(blues-wireless-notecard-pseudo-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/notecard-pseudo-sensor/test/cjson.mock.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/notecard-pseudo-sensor/test/NotecardPseudoSensor.test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/notecard-pseudo-sensor/src/NotecardPseudoSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/notecard-pseudo-sensor/src/NotecardPseudoSensor.h"
)

target_include_directories(blues-wireless-notecard-pseudo-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/notecard-pseudo-sensor/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(blues-wireless-notecard-pseudo-sensor INTERFACE
    arduino-compat
)
