add_library(avrutils INTERFACE)

target_sources(avrutils INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AVRUtils/AVRUtils.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AVRUtils/AVRUtils.h"
)

target_include_directories(avrutils INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AVRUtils"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(avrutils INTERFACE
    arduino-compat
)
