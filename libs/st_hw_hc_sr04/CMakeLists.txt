add_library(st_hw_hc_sr04 INTERFACE)

target_sources(st_hw_hc_sr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ST_HW_HC_SR04/src/ST_HW_HC_SR04.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ST_HW_HC_SR04/src/ST_HW_HC_SR04.h"
)

target_include_directories(st_hw_hc_sr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ST_HW_HC_SR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(st_hw_hc_sr04 INTERFACE
    arduino-compat
)
