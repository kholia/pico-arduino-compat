add_library(pac-legoino INTERFACE)

target_sources(pac-legoino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Lpf2HubEmulation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Lpf2Hub.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/PowerFunctions.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/LegoinoCommon.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Boost.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/LegoinoCommon.h"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Lpf2HubConst.h"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Lpf2Hub.h"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Lpf2HubEmulation.h"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/PowerFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/legoino/src/Boost.h"
)

target_include_directories(pac-legoino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/legoino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-legoino INTERFACE
    arduino-compat
)
