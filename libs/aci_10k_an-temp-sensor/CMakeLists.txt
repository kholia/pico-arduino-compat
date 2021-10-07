add_library(pac-aci_10k_an-temp-sensor INTERFACE)

target_sources(pac-aci_10k_an-temp-sensor INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ACI_10K_an/src/ACI_10K_an.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ACI_10K_an/src/ACI_10K_an.h"
)

target_include_directories(pac-aci_10k_an-temp-sensor INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ACI_10K_an/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aci_10k_an-temp-sensor INTERFACE
    arduino-compat
)
