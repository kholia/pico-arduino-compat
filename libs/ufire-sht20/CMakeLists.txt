add_library(pac-ufire-sht20 INTERFACE)

target_sources(pac-ufire-sht20 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20_JSON.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20_MP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20_JSON.h"
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20_MP.h"
  "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src/uFire_SHT20.h"
)

target_include_directories(pac-ufire-sht20 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uFire_SHT20/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ufire-sht20 INTERFACE
    arduino-compat
)
