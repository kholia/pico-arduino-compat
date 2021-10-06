add_library(brushless-servo INTERFACE)

target_sources(brushless-servo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BrushlessServo/src/SinArray.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BrushlessServo/src/BrushlessServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BrushlessServo/src/SinArray.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_BrushlessServo/src/BrushlessServo.h"
)

target_include_directories(brushless-servo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_BrushlessServo/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(brushless-servo INTERFACE
    arduino-compat
)
