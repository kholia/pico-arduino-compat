add_library(107-arduino-bmp388 INTERFACE)

target_sources(107-arduino-bmp388 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/107-Arduino-BMP388.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Convert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/107-Arduino-BMP388.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Const.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Control.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Convert.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src/BMP388/BMP388_Io.h"
)

target_include_directories(107-arduino-bmp388 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-BMP388/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(107-arduino-bmp388 INTERFACE
    arduino-compat
)
