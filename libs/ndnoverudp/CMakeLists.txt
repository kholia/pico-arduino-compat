add_library(ndnoverudp INTERFACE)

target_sources(ndnoverudp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/NDNOverUDP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/NDNOverUDP.h"
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/utility/util.h"
)

target_include_directories(ndnoverudp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ndnoverudp INTERFACE
    arduino-compat
)
