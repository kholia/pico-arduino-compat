add_library(pac-ultrasonic INTERFACE)

target_sources(pac-ultrasonic INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ultrasonic/src/Ultrasonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ultrasonic/src/Ultrasonic.h"
)

target_include_directories(pac-ultrasonic INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ultrasonic/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ultrasonic INTERFACE
    arduino-compat
)
