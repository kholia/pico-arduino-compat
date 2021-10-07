add_library(pac-closedcube-lps25hb INTERFACE)

target_sources(pac-closedcube-lps25hb INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_LPS25HB_Arduino/src/ClosedCube_LPS25HB.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_LPS25HB_Arduino/src/ClosedCube_LPS25HB.h"
)

target_include_directories(pac-closedcube-lps25hb INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ClosedCube_LPS25HB_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-closedcube-lps25hb INTERFACE
    arduino-compat
)
