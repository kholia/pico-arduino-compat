add_library(usbcontrollerlib INTERFACE)

target_sources(usbcontrollerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/Dashboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/Dashboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/controller.h"
)

target_include_directories(usbcontrollerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(usbcontrollerlib INTERFACE
    arduino-compat
)
