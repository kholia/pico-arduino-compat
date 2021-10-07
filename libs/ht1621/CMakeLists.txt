add_library(pac-ht1621 INTERFACE)

target_sources(pac-ht1621 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ht1621-7-seg/src/HT1621.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ht1621-7-seg/src/HT1621.h"
)

target_include_directories(pac-ht1621 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ht1621-7-seg/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ht1621 INTERFACE
    arduino-compat
)
