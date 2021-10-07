add_library(pac-ds1302 INTERFACE)

target_sources(pac-ds1302 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ds1302/src/Ds1302.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ds1302/examples/02/SetDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ds1302/examples/01/GetDateTime.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ds1302/src/Ds1302.h"
)

target_include_directories(pac-ds1302 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ds1302/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ds1302 INTERFACE
    arduino-compat
)
