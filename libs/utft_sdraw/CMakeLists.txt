add_library(pac-utft_sdraw INTERFACE)

target_sources(pac-utft_sdraw INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UTFT_SdRaw/src/UTFT_SdRaw.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UTFT_SdRaw/src/UTFT_SdRaw.h"
)

target_include_directories(pac-utft_sdraw INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UTFT_SdRaw/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-utft_sdraw INTERFACE
    arduino-compat
)
