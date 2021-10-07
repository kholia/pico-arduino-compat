add_library(pac-smarteverything-cc2541 INTERFACE)

target_sources(pac-smarteverything-cc2541 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-cc2541-library/src/ble/cc2541.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-cc2541-library/src/cc2541.h"
)

target_include_directories(pac-smarteverything-cc2541 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-cc2541-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-cc2541 INTERFACE
    arduino-compat
)
