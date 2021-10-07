add_library(pac-siktec_sdexplore INTERFACE)

target_sources(pac-siktec_sdexplore INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-SdExplore/SIKTEC_SdExplore.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-SdExplore/SIKTEC_SdExplore.h"
)

target_include_directories(pac-siktec_sdexplore INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SIKTEC-SdExplore"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-siktec_sdexplore INTERFACE
    arduino-compat
)
