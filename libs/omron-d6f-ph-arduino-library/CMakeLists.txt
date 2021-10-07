add_library(pac-omron-d6f-ph-arduino-library INTERFACE)

target_sources(pac-omron-d6f-ph-arduino-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Omron_D6FPH/src/Omron_D6FPH.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Omron_D6FPH/src/Omron_D6FPH.h"
)

target_include_directories(pac-omron-d6f-ph-arduino-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Omron_D6FPH/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-omron-d6f-ph-arduino-library INTERFACE
    arduino-compat
)
