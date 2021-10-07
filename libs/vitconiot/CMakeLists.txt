add_library(pac-vitconiot INTERFACE)

target_sources(pac-vitconiot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VitconIOT/VitconIOTItem.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconIOT/VitconBrokerComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconIOT/VitconIOTItem.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconIOT/VitconBrokerComm.h"
)

target_include_directories(pac-vitconiot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VitconIOT"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-vitconiot INTERFACE
    arduino-compat
)
