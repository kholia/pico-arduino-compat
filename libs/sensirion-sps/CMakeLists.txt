add_library(sensirion-sps INTERFACE)

target_sources(sensirion-sps INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sensirion_common.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sensirion_hw_i2c_implementation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sps30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/i2c_master_lib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sps_git_version.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sps_git_version.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sps30.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sensirion_arch_config.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/i2c_master_lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sensirion_common.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-sps/sensirion_i2c.h"
)

target_include_directories(sensirion-sps INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-sps"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sensirion-sps INTERFACE
    arduino-compat
)
