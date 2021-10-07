add_library(pac-bolder-flight-systems-ams5915 INTERFACE)

target_sources(pac-bolder-flight-systems-ams5915 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AMS5915/include/ams5915/ams5915.h"
)

target_include_directories(pac-bolder-flight-systems-ams5915 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AMS5915/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-bolder-flight-systems-ams5915 INTERFACE
    arduino-compat
)
