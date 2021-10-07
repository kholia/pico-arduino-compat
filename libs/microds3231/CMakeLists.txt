add_library(pac-microds3231 INTERFACE)

target_sources(pac-microds3231 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/microDS3231/src/microDS3231.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/microDS3231/src/microDS3231.h"
  "${CMAKE_CURRENT_LIST_DIR}/microDS3231/src/buildTime.h"
)

target_include_directories(pac-microds3231 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/microDS3231/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microds3231 INTERFACE
    arduino-compat
)
