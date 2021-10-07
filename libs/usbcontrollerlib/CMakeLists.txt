add_library(pac-usbcontrollerlib INTERFACE)

target_sources(pac-usbcontrollerlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/controller.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/Dashboard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/vector.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/Dashboard.h"
  "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib/controller.h"
)

target_include_directories(pac-usbcontrollerlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/USBControllerLib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-usbcontrollerlib INTERFACE
    arduino-compat
)
