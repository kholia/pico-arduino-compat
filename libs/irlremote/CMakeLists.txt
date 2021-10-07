add_library(pac-irlremote INTERFACE)

target_sources(pac-irlremote INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRLremote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRLremote.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRLremoteReceive.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRL_Sony.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRLremoteTransmit.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRL_Hash.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/extra/old/IRL_RawIR.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Keycodes.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Time.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRLremote.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_NecAPI.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Protocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Panasonic.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Platform.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Nec.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Decode.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Hash.h"
  "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src/IRL_Receive.h"
)

target_include_directories(pac-irlremote INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IRLremote/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-irlremote INTERFACE
    arduino-compat
)
