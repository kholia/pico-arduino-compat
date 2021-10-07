add_library(pac-premo-virtual-path-following INTERFACE)

target_sources(pac-premo-virtual-path-following INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/CatmullRom.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PreMo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/EncoderManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PID_v1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/MotorManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PurePursuit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/DeadReckoner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/DeadReckoner.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/FunctionType.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/EncoderManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/MotorManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PurePursuit.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PID_v1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/CatmullRom.h"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src/PreMo.h"
)

target_include_directories(pac-premo-virtual-path-following INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PreciseMovement-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-premo-virtual-path-following INTERFACE
    arduino-compat
)
