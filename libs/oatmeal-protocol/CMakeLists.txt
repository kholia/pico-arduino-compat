add_library(oatmeal-protocol INTERFACE)

target_sources(oatmeal-protocol INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/src/oatmeal_protocol.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/examples/SmallHardwareExample/mydevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/examples/SimpleMemoryGetSet/mydevice.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/tests/test_oatmeal_message.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/src/oatmeal_message.h"
  "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/src/oatmeal_protocol.h"
)

target_include_directories(oatmeal-protocol INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/oatmeal-protocol/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(oatmeal-protocol INTERFACE
    arduino-compat
)
