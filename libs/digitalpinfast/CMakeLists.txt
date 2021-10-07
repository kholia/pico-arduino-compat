add_library(pac-digitalpinfast INTERFACE)

target_sources(pac-digitalpinfast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src/digitalPinFast.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src/digitalPinFast.h"
)

target_include_directories(pac-digitalpinfast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-digitalpinfast INTERFACE
    arduino-compat
)
