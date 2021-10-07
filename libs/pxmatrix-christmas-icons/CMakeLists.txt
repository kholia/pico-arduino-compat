add_library(pac-pxmatrix-christmas-icons INTERFACE)

target_sources(pac-pxmatrix-christmas-icons INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/ChristmasIcons.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/ChristmasIcons.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/IncludeList.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GreenCandle.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Present-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/RedCandle-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/RedCandle.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Present-1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/RedLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Wreath-3.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/RedBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Wreath-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Wreath-1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Tree-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/SilverStar.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/YellowLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Present-5.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GreenCandle-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GreenBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/SilverCandle.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GoldCandle.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Reindeers.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Holly-2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Candycane.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Tree-1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GoldBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Stocking.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/PurpleBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Santa.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Snowman.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/WhiteCandle.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Sled.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/SnowGlobe-Tree.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/WoodenBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Reindeer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Present-4.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GreenLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Hat.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/GoldStar.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/BlueLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/BigBell.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Holly-1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Bells.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/ClearLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/SilverBall.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/SnowGlobe-Penguin.h"
  "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src/icons/Present-3.h"
)

target_include_directories(pac-pxmatrix-christmas-icons INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PxMatrixChristmasIcons/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pxmatrix-christmas-icons INTERFACE
    arduino-compat
)
