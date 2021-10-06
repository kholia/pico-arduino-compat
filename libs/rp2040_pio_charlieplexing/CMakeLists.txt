add_library(rp2040_pio_charlieplexing INTERFACE)

target_sources(rp2040_pio_charlieplexing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/rp2040-charlieplexing/src/RP2040_PIO_Charlieplexing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/rp2040-charlieplexing/src/pio-charlieplexing5.h"
  "${CMAKE_CURRENT_LIST_DIR}/rp2040-charlieplexing/src/RP2040_PIO_Charlieplexing.h"
  "${CMAKE_CURRENT_LIST_DIR}/rp2040-charlieplexing/src/pio-charlieplexing6.h"
)

target_include_directories(rp2040_pio_charlieplexing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/rp2040-charlieplexing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rp2040_pio_charlieplexing INTERFACE
    arduino-compat
)
