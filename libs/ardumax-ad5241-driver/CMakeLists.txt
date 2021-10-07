add_library(pac-ardumax-ad5241-driver INTERFACE)

target_sources(pac-ardumax-ad5241-driver INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AD5241/src/AD5241.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AD5241/src/AD5241.h"
)

target_include_directories(pac-ardumax-ad5241-driver INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AD5241/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ardumax-ad5241-driver INTERFACE
    arduino-compat
)
