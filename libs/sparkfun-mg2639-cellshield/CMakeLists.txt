add_library(sparkfun-mg2639-cellshield INTERFACE)

target_sources(sparkfun-mg2639-cellshield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/SFE_MG2639_CellShield.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_GPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_Phone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_SMS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/SFE_MG2639_CellShield.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_Phone.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_SMS.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_AT.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src/util/MG2639_GPRS.h"
)

target_include_directories(sparkfun-mg2639-cellshield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_MG2639_Cellular_Shield_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-mg2639-cellshield INTERFACE
    arduino-compat
)
