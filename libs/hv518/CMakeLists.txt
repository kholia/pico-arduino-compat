add_library(pac-hv518 INTERFACE)

target_sources(pac-hv518 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src/HV518.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src/HV518.h"
)

target_include_directories(pac-hv518 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-hv518 INTERFACE
    arduino-compat
)
