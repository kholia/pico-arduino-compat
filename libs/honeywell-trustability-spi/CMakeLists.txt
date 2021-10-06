add_library(honeywell-trustability-spi INTERFACE)

target_sources(honeywell-trustability-spi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HoneywellTruStabilitySPI/src/HoneywellTruStabilitySPI.h"
)

target_include_directories(honeywell-trustability-spi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HoneywellTruStabilitySPI/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(honeywell-trustability-spi INTERFACE
    arduino-compat
)
