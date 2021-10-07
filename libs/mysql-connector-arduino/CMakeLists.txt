add_library(pac-mysql-connector-arduino INTERFACE)

target_sources(pac-mysql-connector-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Connection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Cursor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Encrypt_Sha1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Cursor.h"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Connection.h"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Encrypt_Sha1.h"
  "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src/MySQL_Packet.h"
)

target_include_directories(pac-mysql-connector-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MySQL_Connector_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mysql-connector-arduino INTERFACE
    arduino-compat
)
