add_library(pac-qmc5883lcompass INTERFACE)

target_sources(pac-qmc5883lcompass INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/QMC5883LCompass/src/QMC5883LCompass.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/QMC5883LCompass/src/QMC5883LCompass.h"
)

target_include_directories(pac-qmc5883lcompass INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/QMC5883LCompass/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-qmc5883lcompass INTERFACE
    arduino-compat
)
