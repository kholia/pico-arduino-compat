add_library(mindsi INTERFACE)

target_sources(mindsi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/MINDSi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/MINDSi.h"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src/Encoder.h"
  "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/examples/3-Projects/LeonardoBreadboard/logo.h"
)

target_include_directories(mindsi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MINDS-i/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mindsi INTERFACE
    arduino-compat
)
