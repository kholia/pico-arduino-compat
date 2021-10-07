add_library(pac-vitconmqtt INTERFACE)

target_sources(pac-vitconmqtt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT/VitconMQTTComm.h"
)

target_include_directories(pac-vitconmqtt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VitconMQTT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vitconmqtt INTERFACE
    arduino-compat
)
