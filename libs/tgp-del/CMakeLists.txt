add_library(tgp-del INTERFACE)

target_sources(tgp-del INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Del/DelBase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Del/Del.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Del/DelBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TGP_Del/Del.h"
)

target_include_directories(tgp-del INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TGP_Del"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(tgp-del INTERFACE
    arduino-compat
)
