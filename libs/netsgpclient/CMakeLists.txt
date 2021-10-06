add_library(netsgpclient INTERFACE)

target_sources(netsgpclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NETSGPClient/NETSGPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NETSGPClient/AsyncNETSGPClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NETSGPClient/AsyncNETSGPClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/NETSGPClient/NETSGPClient.h"
)

target_include_directories(netsgpclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NETSGPClient"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(netsgpclient INTERFACE
    arduino-compat
)
