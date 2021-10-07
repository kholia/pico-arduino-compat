add_library(pac-ndnoverudp INTERFACE)

target_sources(pac-ndnoverudp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/NDNOverUDP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/NDNOverUDP.h"
  "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src/utility/util.h"
)

target_include_directories(pac-ndnoverudp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NDNOverUDP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ndnoverudp INTERFACE
    arduino-compat
)
