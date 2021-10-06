add_library(vitconmqtt INTERFACE)

target_sources(vitconmqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTComm.h"
)

target_include_directories(vitconmqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vitconmqtt INTERFACE
    arduino-compat
)
