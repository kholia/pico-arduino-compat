add_library(pac-andeemobile INTERFACE)

target_sources(pac-andeemobile INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AndeeMobile/src/AndeeMobile.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AndeeMobile/src/AndeeMobile.h"
)

target_include_directories(pac-andeemobile INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AndeeMobile/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-andeemobile INTERFACE
    arduino-compat
)
