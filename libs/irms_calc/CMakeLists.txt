add_library(pac-irms_calc INTERFACE)

target_sources(pac-irms_calc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Irms_calc/src/Irms_Calc.h"
)

target_include_directories(pac-irms_calc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Irms_calc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-irms_calc INTERFACE
    arduino-compat
)
