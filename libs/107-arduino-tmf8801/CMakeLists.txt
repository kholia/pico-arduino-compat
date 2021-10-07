add_library(pac-107-arduino-tmf8801 INTERFACE)

target_sources(pac-107-arduino-tmf8801 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/107-Arduino-TMF8801.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Io.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Api.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/107-Arduino-TMF8801.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Api.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Io.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/TMF8801_Const.h"
  "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src/TMF8801/firmware/main_app_3v3_k2.h"
)

target_include_directories(pac-107-arduino-tmf8801 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/107-Arduino-TMF8801/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-107-arduino-tmf8801 INTERFACE
    arduino-compat
)
