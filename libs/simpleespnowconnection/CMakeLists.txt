add_library(simpleespnowconnection INTERFACE)

target_sources(simpleespnowconnection INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src/SimpleEspNowConnection.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src/SimpleEspNowConnection.h"
)

target_include_directories(simpleespnowconnection INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleEspNowConnection/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(simpleespnowconnection INTERFACE
    arduino-compat
)
