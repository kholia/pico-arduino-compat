add_library(pac-computherm-rf-library INTERFACE)

target_sources(pac-computherm-rf-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src/computhermrf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src/computhermrf.h"
)

target_include_directories(pac-computherm-rf-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-computherm-rf-library INTERFACE
    arduino-compat
)
