add_library(pac-grove-ultrasonic-ranger INTERFACE)

target_sources(pac-grove-ultrasonic-ranger INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Ultrasonic_Ranger/Ultrasonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Grove_Ultrasonic_Ranger/Ultrasonic.h"
)

target_include_directories(pac-grove-ultrasonic-ranger INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Grove_Ultrasonic_Ranger"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-grove-ultrasonic-ranger INTERFACE
    arduino-compat
)
