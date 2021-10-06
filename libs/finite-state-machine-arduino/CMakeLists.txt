add_library(finite-state-machine-arduino INTERFACE)

target_sources(finite-state-machine-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Walk.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/TenSeconds.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Stationary.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Stop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Forward.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Car.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/StateMachine.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/ArrayList.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Decision.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Action.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Dictionary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Transition.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Log.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Behaviors.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/State.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Singleton.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src/Monobehavior.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Car.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Forward.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/TenSeconds.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Stationary.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Walk.h"
  "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/examples/car-demo/Stop.h"
)

target_include_directories(finite-state-machine-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Finite-State-Machine-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(finite-state-machine-arduino INTERFACE
    arduino-compat
)
