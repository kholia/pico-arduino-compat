add_library(sds011-sensor-library INTERFACE)

target_sources(sds011-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SDS011/SDS011.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SDS011/SDS011.h"
)

target_include_directories(sds011-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SDS011"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sds011-sensor-library INTERFACE
    arduino-compat
)
