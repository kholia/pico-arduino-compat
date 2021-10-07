add_library(pac-ikb1_arduino INTERFACE)

target_sources(pac-ikb1_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src/IKB1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src/IKB1.h"
)

target_include_directories(pac-ikb1_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ikb1_arduino INTERFACE
    arduino-compat
)
