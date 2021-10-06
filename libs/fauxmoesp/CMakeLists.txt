add_library(fauxmoesp INTERFACE)

target_sources(fauxmoesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/fauxmoESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/fauxmoESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/templates.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/examples/fauxmoESP_Basic/credentials.sample.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/examples/fauxmoESP_External_Server/credentials.sample.h"
)

target_include_directories(fauxmoesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(fauxmoesp INTERFACE
    arduino-compat
)
