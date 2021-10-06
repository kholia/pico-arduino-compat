add_library(krokots INTERFACE)

target_sources(krokots INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/KrokoTS/KrokoTS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/KrokoTS/KrokoTS.h"
)

target_include_directories(krokots INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/KrokoTS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(krokots INTERFACE
    arduino-compat
)
