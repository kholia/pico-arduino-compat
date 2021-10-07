add_library(pac-iftttwebhook INTERFACE)

target_sources(pac-iftttwebhook INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IFTTTWebhook/src/IFTTTWebhook.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IFTTTWebhook/src/IFTTTWebhook.h"
)

target_include_directories(pac-iftttwebhook INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IFTTTWebhook/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-iftttwebhook INTERFACE
    arduino-compat
)
