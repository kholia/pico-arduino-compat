add_library(pac-simplehotp INTERFACE)

target_sources(pac-simplehotp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleHMAC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleHOTP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/Key.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleSHA1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleHOTP.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/Key.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleSHA1.h"
  "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src/SimpleHMAC.h"
)

target_include_directories(pac-simplehotp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SimpleHOTP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-simplehotp INTERFACE
    arduino-compat
)
