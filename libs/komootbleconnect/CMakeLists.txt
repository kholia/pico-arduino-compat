add_library(pac-komootbleconnect INTERFACE)

target_sources(pac-komootbleconnect INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KomootBLEConnect/src/KomootBLEConnect.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KomootBLEConnect/src/KomootBLEConnect.h"
)

target_include_directories(pac-komootbleconnect INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KomootBLEConnect/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-komootbleconnect INTERFACE
    arduino-compat
)
