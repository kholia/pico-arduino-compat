add_library(pac-jma_spcomm INTERFACE)

target_sources(pac-jma_spcomm INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPRange.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPComm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPBuffer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMACRC8.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPCommSender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPCommReceiver.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPRange.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPCommReceiver.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPCommSender.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPComm100.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPBuffer.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMACRC8.h"
  "${CMAKE_CURRENT_LIST_DIR}/JMASPComm/JMA_SPComm.h"
)

target_include_directories(pac-jma_spcomm INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/JMASPComm"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jma_spcomm INTERFACE
    arduino-compat
)
