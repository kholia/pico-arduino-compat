add_library(pac-mideairwrapper INTERFACE)

target_sources(pac-mideairwrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduMideaWrapper/src/MidearIR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduMideaWrapper/src/MideaIR.h"
)

target_include_directories(pac-mideairwrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduMideaWrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mideairwrapper INTERFACE
    arduino-compat
)
