add_library(pac-as-289r2-thermal-printer-shield INTERFACE)

target_sources(pac-as-289r2-thermal-printer-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AS-289R2/src/AS289R2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AS-289R2/src/AS289R2.h"
  "${CMAKE_CURRENT_LIST_DIR}/AS-289R2/examples/AS-289R2/image.h"
)

target_include_directories(pac-as-289r2-thermal-printer-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AS-289R2/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-as-289r2-thermal-printer-shield INTERFACE
    arduino-compat
)
