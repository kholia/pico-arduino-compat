add_library(hv518 INTERFACE)

target_sources(hv518 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src/HV518.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src/HV518.h"
)

target_include_directories(hv518 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HV518_Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hv518 INTERFACE
    arduino-compat
)
