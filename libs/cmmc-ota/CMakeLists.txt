add_library(cmmc-ota INTERFACE)

target_sources(cmmc-ota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_OTA/src/CMMC_OTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CMMC_OTA/src/CMMC_OTA.h"
)

target_include_directories(cmmc-ota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CMMC_OTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cmmc-ota INTERFACE
    arduino-compat
)
