add_library(pac-pzem004tv30 INTERFACE)

target_sources(pac-pzem004tv30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PZEM-004T-v30/src/PZEM004Tv30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PZEM-004T-v30/src/PZEM004Tv30.h"
)

target_include_directories(pac-pzem004tv30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PZEM-004T-v30/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-pzem004tv30 INTERFACE
    arduino-compat
)
