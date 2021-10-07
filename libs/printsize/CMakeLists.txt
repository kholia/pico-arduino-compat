add_library(pac-printsize INTERFACE)

target_sources(pac-printsize INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintSize/test/unit_test_001.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintSize/PrintSize.h"
)

target_include_directories(pac-printsize INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintSize"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printsize INTERFACE
    arduino-compat
)
