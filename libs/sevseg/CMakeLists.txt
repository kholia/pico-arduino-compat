add_library(sevseg INTERFACE)

target_sources(sevseg INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevSeg/SevSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSeg/SevSeg.h"
)

target_include_directories(sevseg INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevSeg"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sevseg INTERFACE
    arduino-compat
)
