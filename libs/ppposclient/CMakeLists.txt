add_library(ppposclient INTERFACE)

target_sources(ppposclient INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ppposclient/src/PPPOSClient.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ppposclient/src/PPPOS.c"
  "${CMAKE_CURRENT_LIST_DIR}/ppposclient/src/PPPOSClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/ppposclient/src/PPPOS.h"
)

target_include_directories(ppposclient INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ppposclient/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ppposclient INTERFACE
    arduino-compat
)
