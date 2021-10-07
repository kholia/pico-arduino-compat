add_library(pac-deadreckoning-library INTERFACE)

target_sources(pac-deadreckoning-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library/DeadReckoner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library/DeadReckoner.h"
)

target_include_directories(pac-deadreckoning-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-deadreckoning-library INTERFACE
    arduino-compat
)
