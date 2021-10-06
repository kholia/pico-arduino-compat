add_library(adafruit-dap-library INTERFACE)

target_sources(adafruit-dap-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/dap.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_STM32.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_SAMx5.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_SAM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_nRF5x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_nRF5x.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_STM32.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/dap_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/dap.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/Adafruit_DAP_SAM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_from_header/2772cipy.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrnb1500.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkr1000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/circuitplay_m0_samd21g18_sam_ba.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrfox1200.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/boards.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrwan1310.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrwifi1010.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrzero.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrgsm1400.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrvidor4000.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_nano_33_iot.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba_arduino_mkrwan1300.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd21/flash_MKR_bootloaders/samd21_sam_ba.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP/examples/samd51/samx5_flash_from_header/samd51_uf2.h"
)

target_include_directories(adafruit-dap-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_DAP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(adafruit-dap-library INTERFACE
    arduino-compat
)
