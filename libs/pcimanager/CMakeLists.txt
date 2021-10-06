add_library(pcimanager INTERFACE)

target_sources(pcimanager INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciListenerImp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciListenerImp2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciManager.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciListener.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciListenerImp.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/IPciChangeHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src/PciListenerImp2.h"
)

target_include_directories(pcimanager INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-pcimanager/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pcimanager INTERFACE
    arduino-compat
)
