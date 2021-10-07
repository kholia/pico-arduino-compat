add_library(pac-mindsi INTERFACE)

target_sources(pac-mindsi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/MINDSi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/MINDSi.h"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/examples/3-Projects/LeonardoBreadboard/logo.h"
)

target_include_directories(pac-mindsi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mindsi INTERFACE
    arduino-compat
)
