add_library(pac-melopero-sam-m8q INTERFACE)

target_sources(pac-melopero-sam-m8q INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_SAM-M8Q_Arduino_Library/src/Melopero_SAM_M8Q.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Melopero_SAM-M8Q_Arduino_Library/src/Melopero_SAM_M8Q.h"
)

target_include_directories(pac-melopero-sam-m8q INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Melopero_SAM-M8Q_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-melopero-sam-m8q INTERFACE
    arduino-compat
)
