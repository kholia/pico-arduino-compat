add_library(adafruit-arcada-library INTERFACE)

target_sources(adafruit-arcada-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_USBMSD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Alerts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_ImageReader.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_InternalFlash.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Config.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Filesystem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Wav.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/adabox015_clue_plotter/spiritlevel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/pyportal_arcada_test/Endianess.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/pyportal_arcada_test/ESP32BootROM.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Def.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/arcadatype.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Adafruit_Arcada_Filesystem.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_PyPortalTitano.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_PyBadge.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_PyGamerAdvance.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_CircuitPlaygroundExpress.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_PyPortal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_PyGamer.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_Clue.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_MONSTERM4SK.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_HalloWingM0.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_CircuitPlaygroundBluefruit.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/Boards/Adafruit_Arcada_HalloWingM4.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/pixeldust_demos/pixeldust_logo/logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/hallowingm4_arcadatest/audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/mask_arcadatest/coin.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/arcada_pygamer_test/audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/adabox015_clue_plotter/coin.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/adabox015_clue_plotter/digikey_logo.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/hallowingm0_arcadatest/audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/arcada_pybadge_test/audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/pyportal_arcada_test/ESP32BootROM.h"
  "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada/examples/full_board_tests/pyportal_arcada_test/coin.h"
)

target_include_directories(adafruit-arcada-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Adafruit_Arcada"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET adafruit-gfx-library)
    add_subdirectory(../../libs/adafruit-gfx-library build_adafruit-gfx-library)
endif()

target_link_libraries(adafruit-arcada-library INTERFACE
    arduino-compat
    adafruit-gfx-library
)
