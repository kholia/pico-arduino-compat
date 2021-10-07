add_library(pac-aebo INTERFACE)

target_sources(pac-aebo INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AEBO/src/AEBO.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AEBO/src/AEBO.h"
)

target_include_directories(pac-aebo INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AEBO/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-aebo INTERFACE
    arduino-compat
)
