add_library(pac-wpi430-vma430-gps INTERFACE)

target_sources(pac-wpi430-vma430-gps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VMA430_GPS_Module/src/VMA430_GPS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VMA430_GPS_Module/src/VMA430_GPS.h"
)

target_include_directories(pac-wpi430-vma430-gps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VMA430_GPS_Module/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wpi430-vma430-gps INTERFACE
    arduino-compat
)
