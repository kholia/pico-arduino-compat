add_library(pac-hx710b_arduino INTERFACE)

target_sources(pac-hx710b_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/hx710b_arduino/HX710B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/hx710b_arduino/HX710B.h"
)

target_include_directories(pac-hx710b_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/hx710b_arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hx710b_arduino INTERFACE
    arduino-compat
)
