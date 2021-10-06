add_library(dcdccnanocontroller INTERFACE)

target_sources(dcdccnanocontroller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/VStudio/InoProject.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowLocoControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowChooseDcFreq.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowCv.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/controllerDc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Locomotive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/controllerDccpp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DcDcccontroller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Function.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Handle.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/CurrentMonitor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/PacketRegister.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/VStudio/cmdrarduino.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/VStudio/DCCpp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/controller.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/ControllerDc.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Handle.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Function.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowFunctions.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowChooseDcFreq.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/controllerDccpp.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowLocoControl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/Locomotive.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/WindowCv.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/VStudio/InoProject.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/VStudio/MyForm.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/LcdEvents.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/French16.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/English16.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DcDccNanoController.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/DCCpp_Uno.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/CurrentMonitor.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src/DCCpp/PacketRegister.h"
)

target_include_directories(dcdccnanocontroller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DcDccNanoController/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(dcdccnanocontroller INTERFACE
    arduino-compat
)
