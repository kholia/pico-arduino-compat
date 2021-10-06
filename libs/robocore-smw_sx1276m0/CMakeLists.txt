add_library(robocore-smw_sx1276m0 INTERFACE)

target_sources(robocore-smw_sx1276m0 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_SMW-SX1276M0/src/Buffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_SMW-SX1276M0/src/RoboCore_SMW_SX1276M0.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_SMW-SX1276M0/src/Buffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/RoboCore_SMW-SX1276M0/src/RoboCore_SMW_SX1276M0.h"
)

target_include_directories(robocore-smw_sx1276m0 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RoboCore_SMW-SX1276M0/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robocore-smw_sx1276m0 INTERFACE
    arduino-compat
)
