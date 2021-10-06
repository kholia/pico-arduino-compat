add_library(ubidots-gprs-library INTERFACE)

target_sources(ubidots-gprs-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiTcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiBuilder.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/Ubidots.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiProtocolHandler.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiTypes.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiConstants.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiTcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiUtils.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiProtocol.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiProtocolHandler.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/Ubidots.h"
  "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src/UbiBuilder.h"
)

target_include_directories(ubidots-gprs-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ubidots-arduino-gprs/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ubidots-gprs-library INTERFACE
    arduino-compat
)
