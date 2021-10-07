add_library(pac-serial-data-exporter INTERFACE)

target_sources(pac-serial-data-exporter INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-data-exporter/src/SerialDataExporter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-data-exporter/examples/exporter.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-data-exporter/src/SerialDataExporter.h"
)

target_include_directories(pac-serial-data-exporter INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-serial-data-exporter/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serial-data-exporter INTERFACE
    arduino-compat
)
