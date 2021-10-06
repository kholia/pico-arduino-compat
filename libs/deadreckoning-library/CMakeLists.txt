add_library(deadreckoning-library INTERFACE)

target_sources(deadreckoning-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library/DeadReckoner.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library/DeadReckoner.h"
)

target_include_directories(deadreckoning-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/DeadReckoning-library"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(deadreckoning-library INTERFACE
    arduino-compat
)
