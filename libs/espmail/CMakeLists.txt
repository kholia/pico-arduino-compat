add_library(pac-espmail INTERFACE)

target_sources(pac-espmail INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src/libquickmail/quickmail.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src/libquickmail/smtpsocket.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src/ESPMail.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src/libquickmail/smtpsocket.h"
  "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src/libquickmail/quickmail.h"
)

target_include_directories(pac-espmail INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ESPMail/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-espmail INTERFACE
    arduino-compat
)
