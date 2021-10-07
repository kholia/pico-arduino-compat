add_library(pac-fauxmoesp INTERFACE)

target_sources(pac-fauxmoesp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/fauxmoESP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/fauxmoESP.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src/templates.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/examples/fauxmoESP_Basic/credentials.sample.h"
  "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/examples/fauxmoESP_External_Server/credentials.sample.h"
)

target_include_directories(pac-fauxmoesp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/fauxmoESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-fauxmoesp INTERFACE
    arduino-compat
)
