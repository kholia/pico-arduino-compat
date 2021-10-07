add_library(pac-sim808 INTERFACE)

target_sources(pac-sim808 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Gprs.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Gsm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Gps.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Power.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIMComAT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIMComAT.Common.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIM808.Types.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src/SIMComAT.h"
)

target_include_directories(pac-sim808 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-sim808/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sim808 INTERFACE
    arduino-compat
)
