add_library(pac-serialcom INTERFACE)

target_sources(pac-serialcom INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/SerialManager.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/Communication.h"
  "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src/SerialCom.h"
)

target_include_directories(pac-serialcom INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialCom/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialcom INTERFACE
    arduino-compat
)
