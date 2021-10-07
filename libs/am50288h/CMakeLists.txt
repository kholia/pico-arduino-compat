add_library(pac-am50288h INTERFACE)

target_sources(pac-am50288h INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AM50288H/src/AM50288H.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino-AM50288H/src/AM50288H.h"
)

target_include_directories(pac-am50288h INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino-AM50288H/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-am50288h INTERFACE
    arduino-compat
)
