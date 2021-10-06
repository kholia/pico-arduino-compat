add_library(internaltemperature INTERFACE)

target_sources(internaltemperature INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature/InternalTemperature.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature/InternalTemperature.h"
)

target_include_directories(internaltemperature INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/InternalTemperature"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(internaltemperature INTERFACE
    arduino-compat
)
