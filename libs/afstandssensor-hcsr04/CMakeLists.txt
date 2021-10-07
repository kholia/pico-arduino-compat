add_library(pac-afstandssensor-hcsr04 INTERFACE)

target_sources(pac-afstandssensor-hcsr04 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/HCSR04/src/afstandssensor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/HCSR04/src/afstandssensor.h"
)

target_include_directories(pac-afstandssensor-hcsr04 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/HCSR04/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-afstandssensor-hcsr04 INTERFACE
    arduino-compat
)
