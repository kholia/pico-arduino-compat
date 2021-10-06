add_library(ukit-explore INTERFACE)

target_sources(ukit-explore INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/SemiduplexSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/DHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/FlexiTimer2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/TransforRobot.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/onBoardHW.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/Sensor2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/VisionDiscrim.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitServo.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/Sensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitId.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/KalmanMPU6050.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/ClickButton.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/NewTone.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitMotor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitSensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/crc.c"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/crc.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/Sensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExploreKo.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/onBoardHW.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/ucode.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore2Ru.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/KalmanMPU6050.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore2Th.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitId.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/FlexiTimer2.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore2En.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitMotor.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/VisionDiscrim.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitServo.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/ClickButton.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExploreTh.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore2.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExploreRu.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/TransforRobot.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore2Ko.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/kuka.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExploreEn.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/NewTone.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/UKIT_Advance.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uCodeOneMode.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/uKitExplore.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/Sensor2.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/DHT.h"
  "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src/SemiduplexSerial.h"
)

target_include_directories(ukit-explore INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uKitExplore-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ukit-explore INTERFACE
    arduino-compat
)
