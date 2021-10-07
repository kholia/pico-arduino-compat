add_library(pac-internaltemperature INTERFACE)

target_sources(pac-internaltemperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature/InternalTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature/InternalTemperature.h"
)

target_include_directories(pac-internaltemperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-internaltemperature INTERFACE
    arduino-compat
)
