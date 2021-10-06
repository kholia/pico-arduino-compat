add_library(pubnub INTERFACE)

target_sources(pubnub INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino/test/pubnub_arduino_unit_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/test/pubnub_crackers_unit_test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/PubNub.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/PubNubDefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/test_stubs/Ethernet.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino/test_stubs/Client.h"
)

target_include_directories(pubnub INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pubnub INTERFACE
    arduino-compat
)
