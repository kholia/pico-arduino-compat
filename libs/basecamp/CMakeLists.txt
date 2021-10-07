add_library(pac-basecamp INTERFACE)

target_sources(pac-basecamp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/WifiControl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/Basecamp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/mqttGuard.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/WebServer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/Configuration.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/mqttGuardInterface.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/Configuration.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/mqttGuard.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/CaptiveRequestHandler.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/log.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/data.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/WebInterface.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/mqttGuardInterface.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/WebServer.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/debug.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/WifiControl.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/Basecamp/Basecamp.hpp"
)

target_include_directories(pac-basecamp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Basecamp"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-basecamp INTERFACE
    arduino-compat
)
