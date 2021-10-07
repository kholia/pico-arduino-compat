add_library(pac-mpesastk INTERFACE)

target_sources(pac-mpesastk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK/MpesaSTK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK/MpesaSTK.h"
)

target_include_directories(pac-mpesastk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-mpesastk INTERFACE
    arduino-compat
)
