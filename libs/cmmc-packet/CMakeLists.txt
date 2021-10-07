add_library(pac-cmmc-packet INTERFACE)

target_sources(pac-cmmc-packet INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMC-Packet/src/CMMC_Packet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC-Packet/src/CMMC_Packet.h"
)

target_include_directories(pac-cmmc-packet INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMC-Packet/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-cmmc-packet INTERFACE
    arduino-compat
)
