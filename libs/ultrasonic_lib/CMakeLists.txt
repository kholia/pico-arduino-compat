add_library(pac-ultrasonic_lib INTERFACE)

target_sources(pac-ultrasonic_lib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UltraSonic_Lib/UltraSonic.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UltraSonic_Lib/UltraSonic.h"
)

target_include_directories(pac-ultrasonic_lib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UltraSonic_Lib"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ultrasonic_lib INTERFACE
    arduino-compat
)
