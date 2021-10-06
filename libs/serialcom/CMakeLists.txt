add_library(serialcom INTERFACE)

target_sources(serialcom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/SerialManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/Communication.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/SerialCom.h"
)

target_include_directories(serialcom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialcom INTERFACE
    arduino-compat
)
