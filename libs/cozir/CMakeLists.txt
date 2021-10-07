add_library(pac-cozir INTERFACE)

target_sources(pac-cozir INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Cozir/cozir.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cozir/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Cozir/cozir.h"
)

target_include_directories(pac-cozir INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Cozir"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cozir INTERFACE
    arduino-compat
)
