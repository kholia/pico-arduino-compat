add_library(pac-instructableapi INTERFACE)

target_sources(pac-instructableapi INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-instructables-api/src/InstructablesApi.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-instructables-api/src/InstructablesApi.h"
)

target_include_directories(pac-instructableapi INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-instructables-api/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-instructableapi INTERFACE
    arduino-compat
)
