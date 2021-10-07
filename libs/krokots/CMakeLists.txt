add_library(pac-krokots INTERFACE)

target_sources(pac-krokots INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KrokoTS/KrokoTS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KrokoTS/KrokoTS.h"
)

target_include_directories(pac-krokots INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KrokoTS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-krokots INTERFACE
    arduino-compat
)
