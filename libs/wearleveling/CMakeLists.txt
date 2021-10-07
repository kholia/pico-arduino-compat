add_library(pac-wearleveling INTERFACE)

target_sources(pac-wearleveling INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src/EEPROMWearLevel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src/EEPROMWearLevel.h"
)

target_include_directories(pac-wearleveling INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-wearleveling INTERFACE
    arduino-compat
)
