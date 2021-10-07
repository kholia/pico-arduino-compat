add_library(pac-small-e-paper-shield-v2 INTERFACE)

target_sources(pac-small-e-paper-shield-v2 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/EPD.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/sd_epaper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/GT20L16_drive.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/ePaper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/ePaperDfs.h"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/ePaper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/EPD.h"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/GT20L16_drive.h"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/sd_epaper.h"
  "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield/examples/image/picture.h"
)

target_include_directories(pac-small-e-paper-shield-v2 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Small_ePaper_Shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-small-e-paper-shield-v2 INTERFACE
    arduino-compat
    pac-sd
)
