add_library(pac-arduav INTERFACE)

target_sources(pac-arduav INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/Shared_Tools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/GS_Tools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/IFC_Tools.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_Adafruit_BNO055.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/extras/ArdUAV_Config/empty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/GS_Tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_Adafruit_BNO055.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/IFC_Serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/IFC_Tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/GS_Serial.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_quaternion.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/Shared_Tools.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_matrix.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_vector.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src/ArdUAV_imumaths.h"
)

target_include_directories(pac-arduav INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArdUAV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduav INTERFACE
    arduino-compat
)
