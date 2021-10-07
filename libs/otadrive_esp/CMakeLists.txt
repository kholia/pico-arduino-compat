add_library(pac-otadrive_esp INTERFACE)

target_sources(pac-otadrive_esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_misc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_esp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/examples/PIO/FullFeatures.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_esp.h"
)

target_include_directories(pac-otadrive_esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-otadrive_esp INTERFACE
    arduino-compat
)
