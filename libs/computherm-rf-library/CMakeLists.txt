add_library(computherm-rf-library INTERFACE)

target_sources(computherm-rf-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src/computhermrf.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src/computhermrf.h"
)

target_include_directories(computherm-rf-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ComputhermRF/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(computherm-rf-library INTERFACE
    arduino-compat
)
