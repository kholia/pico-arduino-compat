add_library(digitalpinfast INTERFACE)

target_sources(digitalpinfast INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src/digitalPinFast.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src/digitalPinFast.h"
)

target_include_directories(digitalpinfast INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/digitalPinFast/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(digitalpinfast INTERFACE
    arduino-compat
)
