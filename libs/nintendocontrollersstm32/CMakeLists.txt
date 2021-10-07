add_library(pac-nintendocontrollersstm32 INTERFACE)

target_sources(pac-nintendocontrollersstm32 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/genesis.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/SegaController.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/gameport.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/gamecube.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/nunchuck.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/debouncer.h"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/SegaController.h"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/GameControllers.h"
  "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src/dwt.h"
)

target_include_directories(pac-nintendocontrollersstm32 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GameControllersSTM32/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nintendocontrollersstm32 INTERFACE
    arduino-compat
)
