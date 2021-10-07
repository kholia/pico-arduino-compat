add_library(pac-unit_env INTERFACE)

target_sources(pac-unit_env INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/DHT12.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/SHT3X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/QMP6988.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/SHT3X.h"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/DHT12.h"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/UNIT_ENV.h"
  "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src/QMP6988.h"
)

target_include_directories(pac-unit_env INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UNIT_ENV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-unit_env INTERFACE
    arduino-compat
)
