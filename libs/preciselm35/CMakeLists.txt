add_library(pac-preciselm35 INTERFACE)

target_sources(pac-preciselm35 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src/PreciseLM35.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src/PreciseLM35.h"
)

target_include_directories(pac-preciselm35 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PreciseLM35/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-preciselm35 INTERFACE
    arduino-compat
)
