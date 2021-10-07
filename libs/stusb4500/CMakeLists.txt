add_library(pac-stusb4500 INTERFACE)

target_sources(pac-stusb4500 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/STUSB4500/src/STUSB4500.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/STUSB4500/src/STUSB4500.h"
  "${CMAKE_CURRENT_LIST_DIR}/STUSB4500/src/dat/STUSB4500_register.h"
)

target_include_directories(pac-stusb4500 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/STUSB4500/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stusb4500 INTERFACE
    arduino-compat
)
