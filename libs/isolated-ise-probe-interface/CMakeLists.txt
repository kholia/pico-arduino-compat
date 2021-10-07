add_library(pac-isolated-ise-probe-interface INTERFACE)

target_sources(pac-isolated-ise-probe-interface INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH_JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH_MP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP_MP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP_JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ISE.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/ISE_ORP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ISE.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP_MP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/ISE_pH.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_ORP_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH_MP.h"
  "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src/uFire_pH_JSON.h"
)

target_include_directories(pac-isolated-ise-probe-interface INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Isolated_ISE/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-isolated-ise-probe-interface INTERFACE
    arduino-compat
)
