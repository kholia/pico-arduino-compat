add_library(sevsegshift INTERFACE)

target_sources(sevsegshift INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSeg.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSegShift.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSegShift.h"
  "${CMAKE_CURRENT_LIST_DIR}/SevSegShift/SevSeg.h"
)

target_include_directories(sevsegshift INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SevSegShift"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sevsegshift INTERFACE
    arduino-compat
)
