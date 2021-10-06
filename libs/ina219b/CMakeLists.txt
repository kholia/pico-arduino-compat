add_library(ina219b INTERFACE)

target_sources(ina219b INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/INA219B/src/INA219B.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/INA219B/src/INA219B.h"
)

target_include_directories(ina219b INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/INA219B/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ina219b INTERFACE
    arduino-compat
)
