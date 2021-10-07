add_library(pac-cs5464-arduino INTERFACE)

target_sources(pac-cs5464-arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CS5464_Arduino/CS5464.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CS5464_Arduino/CS5464.h"
)

target_include_directories(pac-cs5464-arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CS5464_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cs5464-arduino INTERFACE
    arduino-compat
)
