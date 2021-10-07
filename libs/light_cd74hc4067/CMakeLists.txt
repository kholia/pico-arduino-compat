add_library(pac-light_cd74hc4067 INTERFACE)

target_sources(pac-light_cd74hc4067 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Lightweight-CD74HC4067-Arduino/light_CD74HC4067.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Lightweight-CD74HC4067-Arduino/light_CD74HC4067.h"
)

target_include_directories(pac-light_cd74hc4067 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Lightweight-CD74HC4067-Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-light_cd74hc4067 INTERFACE
    arduino-compat
)
