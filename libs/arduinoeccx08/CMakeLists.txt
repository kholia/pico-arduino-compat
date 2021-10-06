add_library(arduinoeccx08 INTERFACE)

target_sources(arduinoeccx08 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/ECCX08.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08SelfSignedCert.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08JWS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ASN1Utils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/PEMUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08CSR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/sha1.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/ArduinoECCX08.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/ECCX08.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08JWS.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ASN1Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/PEMUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08SelfSignedCert.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/sha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08CSR.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src/utility/ECCX08DefaultTLSConfig.h"
)

target_include_directories(arduinoeccx08 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoECCX08/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(arduinoeccx08 INTERFACE
    arduino-compat
)
