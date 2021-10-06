add_library(isolated-ec-probe-interface INTERFACE)

target_sources(isolated-ec-probe-interface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC_JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC_MP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC_MP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src/uFire_EC.h"
)

target_include_directories(isolated-ec-probe-interface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Isolated_EC/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(isolated-ec-probe-interface INTERFACE
    arduino-compat
)
