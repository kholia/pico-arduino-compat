add_library(pac-circios-roboter-steuerung INTERFACE)

target_sources(pac-circios-roboter-steuerung INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/Hamster.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/Movement.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/LComs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/Motors.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/TimerControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/Hamster.h"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/Movement.h"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/Motors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/LComs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/TimerControl.h"
  "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src/backend/Pins.h"
)

target_include_directories(pac-circios-roboter-steuerung INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Circios-Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-circios-roboter-steuerung INTERFACE
    arduino-compat
)
