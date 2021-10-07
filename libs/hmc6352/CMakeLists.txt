add_library(pac-hmc6352 INTERFACE)

target_sources(pac-hmc6352 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HMC6352/hmc6352.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HMC6352/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HMC6352/hmc6352.h"
)

target_include_directories(pac-hmc6352 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HMC6352"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hmc6352 INTERFACE
    arduino-compat
)
