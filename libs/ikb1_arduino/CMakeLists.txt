add_library(ikb1_arduino INTERFACE)

target_sources(ikb1_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src/IKB1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src/IKB1.h"
)

target_include_directories(ikb1_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IKB1_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ikb1_arduino INTERFACE
    arduino-compat
)
