add_library(pac-fixedpoints INTERFACE)

target_sources(pac-fixedpoints INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPointsCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPointsCommon/SFixedCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPointsCommon/UFixedCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPointsCommon/FixedPointsCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/UFixedMemberFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/Details.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/SFixedMemberFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/SFixed.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/SFixedFreeFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/Utils.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/FixedPoints.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/UFixed.h"
  "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src/FixedPoints/UFixedFreeFunctions.h"
)

target_include_directories(pac-fixedpoints INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FixedPointsArduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fixedpoints INTERFACE
    arduino-compat
)
