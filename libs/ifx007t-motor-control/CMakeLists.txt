add_library(pac-ifx007t-motor-control INTERFACE)

target_sources(pac-ifx007t-motor-control INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/IFX007T-Motor-Control/src/IFX007T-Motor-Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/IFX007T-Motor-Control/src/IFX007T-Motor-Control.h"
)

target_include_directories(pac-ifx007t-motor-control INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/IFX007T-Motor-Control/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ifx007t-motor-control INTERFACE
    arduino-compat
)
