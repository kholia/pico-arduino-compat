add_library(pac-sevseg INTERFACE)

target_sources(pac-sevseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevSeg/SevSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSeg/SevSeg.h"
)

target_include_directories(pac-sevseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevSeg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevseg INTERFACE
    arduino-compat
)
