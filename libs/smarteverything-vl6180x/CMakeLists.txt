add_library(pac-smarteverything-vl6180x INTERFACE)

target_sources(pac-smarteverything-vl6180x INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-vl6180x-library/src/sensor/VL6180.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-vl6180x-library/src/VL6180.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-vl6180x-library/src/sensor/VL6180Reg.h"
)

target_include_directories(pac-smarteverything-vl6180x INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-vl6180x-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-vl6180x INTERFACE
    arduino-compat
)
