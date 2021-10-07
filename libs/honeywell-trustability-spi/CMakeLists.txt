add_library(pac-honeywell-trustability-spi INTERFACE)

target_sources(pac-honeywell-trustability-spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HoneywellTruStabilitySPI/src/HoneywellTruStabilitySPI.h"
)

target_include_directories(pac-honeywell-trustability-spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HoneywellTruStabilitySPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-honeywell-trustability-spi INTERFACE
    arduino-compat
)
