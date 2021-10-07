add_library(pac-microfire_sht3x INTERFACE)

target_sources(pac-microfire_sht3x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SHT3x/src/uFire_SHT3x.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SHT3x/src/uFire_SHT3x.h"
)

target_include_directories(pac-microfire_sht3x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SHT3x/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-microfire_sht3x INTERFACE
    arduino-compat
)
