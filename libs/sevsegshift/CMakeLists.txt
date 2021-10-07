add_library(pac-sevsegshift INTERFACE)

target_sources(pac-sevsegshift INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSegShift.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSegShift.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSeg.h"
)

target_include_directories(pac-sevsegshift INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevSegShift"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sevsegshift INTERFACE
    arduino-compat
)
