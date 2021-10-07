add_library(pac-md_sn76489 INTERFACE)

target_sources(pac-md_sn76489 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/src/MD_SN76489_Direct.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/src/MD_SN76489_SPI.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/src/MD_SN76489.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/src/MD_SN76489.h"
  "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/examples/MD_SN76489_RTTTL_Player/MD_SN76489_RTTTL_Player.h"
)

target_include_directories(pac-md_sn76489 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MD_SN76489/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-md_sn76489 INTERFACE
    arduino-compat
)
