add_library(pac-vitconcommon INTERFACE)

target_sources(pac-vitconcommon INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconCRC32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconGP2Y0A21YK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconSAA1064T.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconHT16K33.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconNTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconGP2Y0A21YK.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconNTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconSAA1064T.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconHT16K33.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconCommon/VitconCRC32.h"
)

target_include_directories(pac-vitconcommon INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VitconCommon"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vitconcommon INTERFACE
    arduino-compat
)
