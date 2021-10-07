add_library(pac-ubxgps INTERFACE)

target_sources(pac-ubxgps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src/UbxGpsNavPvt.h"
  "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src/UbxGpsNavPosllh.h"
  "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src/UbxGpsNavSol.h"
  "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src/UbxGps.h"
  "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src/UbxGpsNavPosecef.h"
)

target_include_directories(pac-ubxgps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UbxGps/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ubxgps INTERFACE
    arduino-compat
)
