add_library(uc121902-tnarx-a INTERFACE)

target_sources(uc121902-tnarx-a INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/UC121902-TNARX-A/examples/purgatory/53 bit writing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/UC121902-TNARX-A/UC121902-TNARX-A.h"
)

target_include_directories(uc121902-tnarx-a INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/UC121902-TNARX-A"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(uc121902-tnarx-a INTERFACE
    arduino-compat
)
