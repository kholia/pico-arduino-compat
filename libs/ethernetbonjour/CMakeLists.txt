add_library(pac-ethernetbonjour INTERFACE)

target_sources(pac-ethernetbonjour INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EthernetBonjour/EthernetBonjour.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetBonjour/utility/EthernetUtil.c"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetBonjour/EthernetBonjour.h"
  "${CMAKE_CURRENT_LIST_DIR}/EthernetBonjour/utility/EthernetUtil.h"
)

target_include_directories(pac-ethernetbonjour INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EthernetBonjour"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ethernetbonjour INTERFACE
    arduino-compat
)
