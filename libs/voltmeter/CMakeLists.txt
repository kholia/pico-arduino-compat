add_library(pac-voltmeter INTERFACE)

target_sources(pac-voltmeter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/voltmeter/src/Voltmeter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/voltmeter/src/Voltmeter.h"
)

target_include_directories(pac-voltmeter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/voltmeter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-voltmeter INTERFACE
    arduino-compat
)
