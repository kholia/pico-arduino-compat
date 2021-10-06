add_library(imufilter INTERFACE)

target_sources(imufilter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/imuFilter/src/imuFilter.h"
)

target_include_directories(imufilter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/imuFilter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(imufilter INTERFACE
    arduino-compat
)
