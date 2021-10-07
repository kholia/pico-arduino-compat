add_library(pac-matrix-mini-library INTERFACE)

target_sources(pac-matrix-mini-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniBTN.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniDIG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MatrixMini.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniRC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniANG.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniLED.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniDC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA954X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA9685.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PS2Ctrl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/BATTERY.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA9633.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/HC04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/MiniI2C.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/PIXY/PixyCam.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/HT/HTColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/HT/HTCompass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MatrixMini.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniRC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniBTN.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniLED.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniDC.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniANG.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/MiniDIG.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA9633.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/HC04.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PS2Ctrl.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA954X.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/PCA9685.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/utility/BATTERY.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/MiniI2C.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/PIXY/PixyCam.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/HT/HTColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src/I2C/HT/HTCompass.h"
)

target_include_directories(pac-matrix-mini-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MatrixMini/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-matrix-mini-library INTERFACE
    arduino-compat
)
