add_library(pac-bohlebots_bno055 INTERFACE)

target_sources(pac-bohlebots_bno055 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BohleBots_BNO055/src/BohleBots_BNO055.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BohleBots_BNO055/src/BohleBots_BNO055.h"
)

target_include_directories(pac-bohlebots_bno055 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BohleBots_BNO055/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bohlebots_bno055 INTERFACE
    arduino-compat
)
