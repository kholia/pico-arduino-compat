add_library(at42qt INTERFACE)

target_sources(at42qt INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/AT42QT1060.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/AT42QT1070.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/AT42QT2160.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/AT42QT2120.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT1060.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT1070.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT2160.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT2120.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/AT42QTDefinitions.h"
  "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src/AT42QT/RegisterAddresses.h"
)

target_include_directories(at42qt INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AT42QT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(at42qt INTERFACE
    arduino-compat
)
