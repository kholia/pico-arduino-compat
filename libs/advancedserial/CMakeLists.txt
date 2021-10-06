add_library(advancedserial INTERFACE)

target_sources(advancedserial INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src/advancedSerial.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src/advancedSerial.h"
)

target_include_directories(advancedserial INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/advancedSerial/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(advancedserial INTERFACE
    arduino-compat
)
