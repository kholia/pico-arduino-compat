add_library(pac-jrkg2 INTERFACE)

target_sources(pac-jrkg2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/jrk-g2-arduino/JrkG2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/jrk-g2-arduino/JrkG2.h"
)

target_include_directories(pac-jrkg2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/jrk-g2-arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-jrkg2 INTERFACE
    arduino-compat
)
