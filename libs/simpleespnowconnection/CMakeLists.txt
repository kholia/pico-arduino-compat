add_library(pac-simpleespnowconnection INTERFACE)

target_sources(pac-simpleespnowconnection INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src/SimpleEspNowConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src/SimpleEspNowConnection.h"
)

target_include_directories(pac-simpleespnowconnection INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simpleespnowconnection INTERFACE
    arduino-compat
)
