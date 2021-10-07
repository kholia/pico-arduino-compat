add_library(pac-inputdebounce INTERFACE)

target_sources(pac-inputdebounce INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/InputDebounce/src/InputDebounce.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/InputDebounce/src/InputDebounce.h"
)

target_include_directories(pac-inputdebounce INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/InputDebounce/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-inputdebounce INTERFACE
    arduino-compat
)
