add_library(pac-lp50xx INTERFACE)

target_sources(pac-lp50xx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LP50XX/src/LP50XX.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LP50XX/src/I2C_coms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LP50XX/src/I2C_coms.h"
  "${CMAKE_CURRENT_LIST_DIR}/LP50XX/src/LP50XX.h"
)

target_include_directories(pac-lp50xx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LP50XX/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-lp50xx INTERFACE
    arduino-compat
)
