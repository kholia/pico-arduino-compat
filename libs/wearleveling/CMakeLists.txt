add_library(wearleveling INTERFACE)

target_sources(wearleveling INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src/EEPROMWearLevel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src/EEPROMWearLevel.h"
)

target_include_directories(wearleveling INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WearLeveling/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wearleveling INTERFACE
    arduino-compat
)
