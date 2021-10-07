add_library(pac-psxnewlib INTERFACE)

target_sources(pac-psxnewlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/src/PsxNewLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/examples/GunconAbsMouse/AbsMouse.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/src/PsxControllerHwSpi.h"
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/src/PsxControllerBitBang.h"
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/src/PsxNewLib.h"
  "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/examples/GunconAbsMouse/AbsMouse.h"
)

target_include_directories(pac-psxnewlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PsxNewLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-psxnewlib INTERFACE
    arduino-compat
)
