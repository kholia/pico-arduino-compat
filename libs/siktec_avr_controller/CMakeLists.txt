add_library(pac-siktec_avr_controller INTERFACE)

target_sources(pac-siktec_avr_controller INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-AVR-Controller/src/siksd.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-AVR-Controller/src/siksd.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-AVR-Controller/examples/Controller_Blink_Delay/sik_logo_100_33.h"
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-AVR-Controller/examples/Controller_Image_Reader/sik_logo_20_33.h"
)

target_include_directories(pac-siktec_avr_controller INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-AVR-Controller/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-siktec_avr_controller INTERFACE
    arduino-compat
)
