add_library(pac-avrutils INTERFACE)

target_sources(pac-avrutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AVRUtils/AVRUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AVRUtils/AVRUtils.h"
)

target_include_directories(pac-avrutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AVRUtils"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-avrutils INTERFACE
    arduino-compat
)
