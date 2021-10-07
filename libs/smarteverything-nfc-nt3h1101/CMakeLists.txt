add_library(pac-smarteverything-nfc-nt3h1101 INTERFACE)

target_sources(pac-smarteverything-nfc-nt3h1101 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/SmeNfc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/NT3H1101.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/ndef.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/rtdUri.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/rtdText.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/nfcForum.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/SmeNfc.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/NT3H1101_model.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/NT3H1101.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/ndef.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/nfcForum.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/rtdTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/rtdText.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src/nfc/ndef/rtd/rtdUri.h"
)

target_include_directories(pac-smarteverything-nfc-nt3h1101 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-nt3h1x01-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-nfc-nt3h1101 INTERFACE
    arduino-compat
)
