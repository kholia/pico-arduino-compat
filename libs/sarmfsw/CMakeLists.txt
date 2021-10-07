add_library(pac-sarmfsw INTERFACE)

target_sources(pac-sarmfsw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_temperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_angle.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_chip_stm32.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_ascii.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_bcd.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_linearization.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_errors.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_average.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_var_test.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_gray.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_ticks.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_hal_peripheral.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_rotation.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_float.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_chip_ino.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_chip_sam.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_endian.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_var_size.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_attributes.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_stdclib.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_cmsis.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_typedefs.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/sarmfsw.h"
  "${CMAKE_CURRENT_LIST_DIR}/sarmfsw/arm_inlines_binary.h"
)

target_include_directories(pac-sarmfsw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sarmfsw"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-sarmfsw INTERFACE
    arduino-compat
)
