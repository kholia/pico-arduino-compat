add_library(pac-nova_sds011-sensor-library INTERFACE)

target_sources(pac-nova_sds011-sensor-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Nova_SDS011/src/NovaSDS011.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Nova_SDS011/src/Commands.h"
  "${CMAKE_CURRENT_LIST_DIR}/Nova_SDS011/src/NovaSDS011.h"
)

target_include_directories(pac-nova_sds011-sensor-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Nova_SDS011/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nova_sds011-sensor-library INTERFACE
    arduino-compat
)
