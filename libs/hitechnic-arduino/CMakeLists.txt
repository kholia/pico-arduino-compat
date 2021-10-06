add_library(hitechnic-arduino INTERFACE)

target_sources(hitechnic-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicServoController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicDcMotorController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/examples/OpenClosedLoopVelocityLogger/RollingIntegerAverage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicController.h"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicDcMotorController.h"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src/HiTechnicServoController.h"
  "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/examples/OpenClosedLoopVelocityLogger/RollingIntegerAverage.h"
)

target_include_directories(hitechnic-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HiTechnic-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hitechnic-arduino INTERFACE
    arduino-compat
)
