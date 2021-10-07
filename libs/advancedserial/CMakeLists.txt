add_library(pac-advancedserial INTERFACE)

target_sources(pac-advancedserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src/advancedSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src/advancedSerial.h"
)

target_include_directories(pac-advancedserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-advancedserial INTERFACE
    arduino-compat
)
