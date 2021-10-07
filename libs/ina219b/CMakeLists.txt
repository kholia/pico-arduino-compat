add_library(pac-ina219b INTERFACE)

target_sources(pac-ina219b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA219B/src/INA219B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA219B/src/INA219B.h"
)

target_include_directories(pac-ina219b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA219B/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ina219b INTERFACE
    arduino-compat
)
