add_library(otadrive_esp INTERFACE)

target_sources(otadrive_esp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_misc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_esp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/examples/PIO/FullFeatures.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src/otadrive_esp.h"
)

target_include_directories(otadrive_esp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OTAdriveESP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(otadrive_esp INTERFACE
    arduino-compat
)
