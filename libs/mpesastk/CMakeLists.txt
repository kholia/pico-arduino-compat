add_library(mpesastk INTERFACE)

target_sources(mpesastk INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK/MpesaSTK.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK/MpesaSTK.h"
)

target_include_directories(mpesastk INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MpesaSTK"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mpesastk INTERFACE
    arduino-compat
)
